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

void solve()
{
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    int ans = 0; 

    for (int j = 30; j >= 0; j--)
    {
       
        int neededoperations = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (((a[i] >> j) & 1) == 0)
            {
                neededoperations++;
            }
        }

        if (k >= neededoperations)
        {
            
            k -= neededoperations;
            ans |= (1LL << j);
        }
    }

    cout << ans << endl;
    return;
}

int32_t main()
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