#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int red = 0, white = 0;

void dfs(int node, int color, vector<vector<int>>& adj, vector<int>& visited) {
	visited[node]++;

	if (color == 1)
		red++;
	else
		white++;
	
	
	for (int neighbor : adj[node]) {

		if (!visited[neighbor]) {
			dfs(neighbor, 1 - color, adj, visited); 
		}
	}
}


void solve()
{
    int n;
    cin >> n;

	vector<vector<int>> adj(n+1, vector<int>());
	vector<int> visited(n+1, 0);

	for (int i = 0; i < n - 1; i++) { 
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, 0, adj, visited); 

	cout << 1LL * red * white - (n - 1) << endl;


}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}