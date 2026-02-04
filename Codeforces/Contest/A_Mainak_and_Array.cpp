#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    for (auto &x : v)
        cin >> x;

    int maximum = v[n-1]-v[0];

    for (int i = 1; i < n; i++) maximum = max(maximum,v[i]-v[0]);
    for (int i = 0; i < n-1; i++) maximum = max(maximum,v[n-1]-v[i]);
    for (int i = 0; i < n-1; i++) maximum = max(maximum,v[i]-v[i+1]);
    
    
    

    cout << maximum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}