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
    int n, m;
    cin >> n >> m;

    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    vll b(m);
    for (auto &x : b)
        cin >> x;

    vll c(m);
    for (auto &x : c)
        cin >> x;

    vll temp0;
    vector<pair<int, int>> temp1;
    for (int i = 0; i < m; i++)
    {
        if (c[i] > 0)
        {
            temp1.push_back({b[i],c[i]});
        }else{
            temp0.push_back(b[i]);
        }
    }

    sort(all(temp0));
    sort(all(temp1));

    int ans = 0;
    for (int i = 0; i < temp1.size(); i++)
    {
        int life = temp1[i].first;
        int reward = temp1[i].second;

        auto it = a.lower_bound(life);

        if(it==a.end()){
            continue;
        }

        int x=*it;

        a.erase(it); 
        a.insert(max(x, reward)); 
        ans++; 
    }

    for (int x : temp0)
    {
        
        auto it = a.lower_bound(x);
        
        if (it != a.end())
        {

            ans++;
            a.erase(it); 
        }

    }
    

    cout << ans << endl;
    


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