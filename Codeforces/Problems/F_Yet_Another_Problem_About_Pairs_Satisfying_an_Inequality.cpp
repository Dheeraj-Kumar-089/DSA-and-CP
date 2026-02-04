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
    int n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;
    vector<pair<int, int>> correctindices;
    vector<int> correctelement;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < (i + 1))
        {
            correctindices.push({a[i], (i + 1)});
            correctelement.push(a[i]);
        }
    }

    sort(all(correctelement));
    int ans = 0;

    for (int i = 0; i < correctindices.size(); i++)
    {

        int key = correctindices[i].second;
        int idx = upper_bound(correctelement.begin(), correctelement.end(), key) - correctelement.begin();
        ans+=correctelement.size()-idx;
        
    }

    cout<<ans<<endl;
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