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
    ll n,q;
    cin>>n>>q;

    vll a(n);
    for(auto&x:a) cin>>x;
    
    vll k(q);
    for(auto&x:k) cin>>x;

    vll maximumidx(n);
    vll prefixsum(n);

    maximumidx[0]=a[0];
    prefixsum[0]=a[0];

    unordered_map<ll,ll> idx;
    idx[maximumidx[0]]=0;

    for (ll i = 1; i < n; i++)
    {
        prefixsum[i]=prefixsum[i-1]+a[i];


        if(maximumidx[i-1]<a[i]) maximumidx[i]=a[i];
        else maximumidx[i]=maximumidx[i-1];

        idx[maximumidx[i]]=i;

    }
    vll ans(q);


    for (ll i = 0; i < q; i++)
    {
        if(k[i]==0){
            ans[i]=0;
            continue;
        }

        ll index = lower_bound(all(maximumidx),k[i])-maximumidx.begin();

        if(idx.find(k[i])!=idx.end()){
            ans[i]=prefixsum[idx[k[i]]];
        }else{
            if((index)>=1) ans[i]=prefixsum[index-1];
            else ans[i]=0;
        }
    }

    for(auto &x:ans){
        cout<<x<<" ";
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