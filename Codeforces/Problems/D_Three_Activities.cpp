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

    vector<pair<ll, ll>> max1;

    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        max1.push_back({a[i], i});
    }

    vector<pair<ll, ll>> max2;

    vll b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        max2.push_back({b[i], i});
    }

    vector<pair<ll, ll>> max3;

    vll c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
        max3.push_back({c[i], i});
    }

    sort(max1.begin(), max1.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
         { return a.first > b.first; });
    sort(max2.begin(), max2.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
         { return a.first > b.first; });
    sort(max3.begin(), max3.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
         { return a.first > b.first; });


    vector<ll> ansa(3);

    for (ll i = 0; i < 3; i++)
    {
        ansa[i]=max1[i].second;
    }
    
    vector<ll> ansb(3);

    for (ll i = 0; i < 3; i++)
    {
        ansb[i]=max2[i].second;
    }


    vector<ll> ansc(3);

    for (ll i = 0; i < 3; i++)
    {
        ansc[i]=max3[i].second;
    }

    ll ans = 0;

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                ll x = ansa[i],y=ansb[j],z=ansc[k];

                if((x==y) or (y==z) or (z==x)) continue;

                ans = max(ans,a[x]+b[y]+c[z]);

            }
            
        }
        
    }

    cout<<ans<<endl;
    
    


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