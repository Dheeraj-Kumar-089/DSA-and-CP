#include <bits/stdc++.h>
using namespace std;

const long long M = 998244353;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

vector<ll> power(100000 + 1);

ll binExp(int a, int b) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> p(n);
    for (auto& x : p) cin >> x;
    vector<ll> q(n);
    for (auto& x : q) cin >> x;

    vector<ll> power_p(n), power_q(n);
    for (int i = 0; i < n; ++i) {
        power_p[i] = power[p[i]];
        power_q[i] = power[q[i]];
    }

    vector<ll> prefix_max_p(n), suffix_max_q(n);
    prefix_max_p[0] = power_p[0];
    for (int i = 1; i < n; ++i) {
        prefix_max_p[i] = max(prefix_max_p[i-1], power_p[i]);
    }

    suffix_max_q[n-1] = power_q[n-1];
    for (int i = n-2; i >= 0; --i) {
        suffix_max_q[i] = max(suffix_max_q[i+1], power_q[i]);
    }

    vector<ll> r(n);
    r[0] = (power_p[0] + power_q[0]) % M;
    for (int i = 1; i < n; ++i) {
        ll max_p = prefix_max_p[i];
        ll max_q = (i < n) ? suffix_max_q[0] : suffix_max_q[n - i];
        r[i] = (max_p + max_q) % M;
    }

    for (auto& x : r) cout << x << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute powers of 2 up to 1e5
    for (int i = 0; i <= 100000; ++i) {
        power[i] = binExp(2, i);
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}