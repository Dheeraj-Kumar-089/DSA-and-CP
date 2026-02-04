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

    sort(all(a));

    vector<bool> isVisited(n,false);
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {

        mp[a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        if (isVisited[mp[a[i]]] == false)
        {
            while (mp.find(a[i]) != mp.end() && a[i] <= k)
            {
                isVisited[mp[a[i]]] = true;
               
                a[i] += temp;
            }
            if(a[i]>k){
                ans.push_back(temp);
            }else{
                cout<<-1<<endl;
                return;
            }
        }
        else
        {
            continue;
        }
       
        
    }

    if(ans.size()==0){
        cout<<-1<<endl;
        return;
    }

    cout<<ans.size()<<endl;
    for(auto & x:ans){
        cout<<x<<" ";

    }
    cout<<endl;
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