#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> order(n + 1);
    vll a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    vll b(n);
    for (auto &x : b)
    {
        cin >> x;
    }

    vll exitorder(n+1);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        order[a[i]].first = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        order[b[i]].second = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        exitorder[order[a[i]].first]=order[a[i]].second;
    }

    int maximum = exitorder[1];
    
    for (int i = 2; i <= n; i++)
    {
        if(maximum>exitorder[i]){
            count++;
        }
        maximum = max(maximum,exitorder[i]);
    }

    cout<<count<<endl;

    
    

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