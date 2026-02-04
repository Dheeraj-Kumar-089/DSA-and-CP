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
    ll n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    ll r = n+1;
    ll l = 0;

    
    for (ll i = x-2; i >=0 ; i--)
    {
        if(s[i]=='#'){
            l=i+1;
            break;
        }
    }

    for (ll i = x; i < n  ; i++)
    {
        if(s[i]=='#'){
            r=i+1;
            break;
        }
    }


    ll ans = max(min(l+1,n-x+1),min(x,n-r+2));
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