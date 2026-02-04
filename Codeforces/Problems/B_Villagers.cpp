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

void solve(){
    ll n;
    cin>>n;

    vll a(n);
    for(auto&x:a) cin>>x;

    sort(all(a));
    ll ans = 0;

    if(n&1){
        for (ll i = n-1; i >= 0; i-=2)
        {
            ans+=a[i];
        }
        
    }else{
        for (ll i = n-1; i >= 0; i-=2)
        {
            ans+=a[i];
        }
        
    }

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