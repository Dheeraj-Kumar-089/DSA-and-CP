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
    ll n,k;
    cin>>n>>k;

    vll a(n);
    for(auto &x:a) cin>>x;

    vll ans;

    multimap<ll,ll,greater<ll>> mp1;

    if(k==1){
        for (ll i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
        
    }


    for (ll i = 0; i < n; i++)
    {
        if(a[i]%k==0){
            ans.push_back(i+1);
            
        }else{
            ll modulus = a[i]%k;
            mp1.insert({modulus,i+1});
        }
    }


    for(auto a:mp1){
        ans.push_back(a.second);
    }

    for (ll i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    

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