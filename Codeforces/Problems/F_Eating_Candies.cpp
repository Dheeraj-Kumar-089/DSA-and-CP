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
    vector<ll>weight(n);
    for(ll i=0;i<n;i++){
        cin>>weight[i];
    }
    vector<ll>suffix_sum(n);
    map<ll,ll>index;
    ll sum=0;
    for(ll i=n-1;i>=0;i--){
        sum+=weight[i];
        index[sum]=i;
        suffix_sum[i]=sum;
    }
    ll ans=0;
    ll prefix_sum=0;
    for(ll i=0;i<n;i++){
        index.erase(suffix_sum[i]);
        prefix_sum+=weight[i];
        if(index.find(prefix_sum)!=index.end()){
            ans=max(ans,(i+1)+(n-index[prefix_sum]));
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