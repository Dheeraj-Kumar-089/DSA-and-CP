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
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    ll totaltime = 0;

    vector<pair<ll,ll>> buildingmap;

    for (ll i = 0; i < n; i++)
    {
        buildingmap.push_back({a[i],i});
    }

    sort(buildingmap.rbegin(),buildingmap.rend());

    vll ans(n+1,0);

    ans[0]=0;

    ll coordinates=1;

    for (ll i = 0; i < n; i++)
    {
        ans[buildingmap[i].second+1] = coordinates;
        totaltime+=2*(buildingmap[i].first*abs(coordinates));

        if(coordinates<0){
            coordinates = abs(coordinates) + 1;
        }else{
            coordinates = -1*coordinates;
        }
    }
    
    cout<<totaltime<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }

    
    cout << endl;
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