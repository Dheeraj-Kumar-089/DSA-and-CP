#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


ll nCr(ll n, ll r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    r = min(r, n - r); 

    ll res = 1;
    for (ll i = 1; i <= r; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void solve(){
    ll n;
    cin>>n;

    vll v(n);
    for(auto& x:v) cin>>x;

    ll ans=0;
    ll combination=0;

    
    ll count0 = 0;
    ll count1 = 0;


    count0 = count(v.begin(),v.end(),0);
    count1 = count(v.begin(),v.end(),1);

    for (ll i = 1; i <= count0; i++)
    {
        combination+=nCr(count0,i);
    }
    
    ans+=count1*combination;
    ans+=count1;

    cout<<ans<<endl;

    
}

int main(){
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