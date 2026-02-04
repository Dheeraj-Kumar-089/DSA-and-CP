#include <bits/stdc++.h>
using namespace std;

const long long UNREACHABLE = -1;

void solve() {
    int n, st;
    cin >> n >> st;

    vector<int> w(n + 1);
    for (int i = 1; i <= n; ++i) cin >> w[i];

    vector<vector<int>> adj(n + 1);
    vector<int> parent(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Step 1: BFS to compute depth and parent relative to root (1)
    vector<int> depth(n + 1, -1);
    queue<int> q;
    depth[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    // Step 2: Precompute allowed vertices based on max_up_moves
    int max_up_moves = (depth[st] > 0) ? (depth[st] - 1) / 2 : -1;
    if (max_up_moves < 0) {
        cout << 0 << "\n";
        return;
    }

    vector<bool> allowed(n + 1, false);

    // BFS from st with constraint on up moves
    queue<pair<int, int>> bfs2; // {vertex, up_moves_used}
    bfs2.push({st, 0});
    allowed[st] = true;

    while (!bfs2.empty()) {
        auto [u, up_moves] = bfs2.front();
        bfs2.pop();

        for (int v : adj[u]) {
            int next_up_moves = up_moves + (v == parent[u] ? 1 : 0);

            if (next_up_moves > max_up_moves) continue;
            if (!allowed[v]) {
                allowed[v] = true;
                bfs2.push({v, next_up_moves});
            }
        }
    }

    // Step 3: Dijkstra-like traversal restricted to allowed vertices
    priority_queue<tuple<long long, int, int>> pq; // {life, steps, vertex}
    vector<long long> max_life(n + 1, UNREACHABLE);

    long long initial_life = 1 + w[st];
    int max_moves_found = 0;

    if (initial_life > 0) {
        pq.push({initial_life, 0, st});
        max_life[st] = initial_life;
    }

    while (!pq.empty()) {
        auto [life, steps, u] = pq.top();
        pq.pop();

        if (life < max_life[u]) continue;
        max_moves_found = max(max_moves_found, steps);

        for (int v : adj[u]) {
            if (!allowed[v]) continue; // Skip disallowed vertices
            int next_steps = steps + 1;

            // Must maintain increasing depth condition
            if (depth[v] <= next_steps) continue;

            long long next_life = life + w[v];
            if (next_life <= 0) continue;

            if (next_life > max_life[v]) {
                max_life[v] = next_life;
                pq.push({next_life, next_steps, v});
            }
        }
    }

    cout << max_moves_found + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
