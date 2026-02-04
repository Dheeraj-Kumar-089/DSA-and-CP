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
    ll n,s;
    cin>>n>>s;

    vll a(n);
    for(auto&x:a) cin>>x;

    ll sum = accumulate(all(a),0);
    if(sum<s){
        cout<<-1<<endl;
        return;
    }
    if(sum==s){
        cout<<0<<endl;
        return;
    }


    vll prefixsum(n);

    prefixsum[0]=a[0];
    ll ans = LLONG_MAX;

    for (ll i = 0; i < n; i++)
    {
        prefixsum[i]=prefixsum[i-1]+a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        ll curr = prefixsum[i-1]+s;

        if(prefixsum[n-1]<curr){
            continue;
        }else{

            ll index = upper_bound(all(prefixsum),curr)-prefixsum.begin();
            ans = min(ans,n-(index-i));
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