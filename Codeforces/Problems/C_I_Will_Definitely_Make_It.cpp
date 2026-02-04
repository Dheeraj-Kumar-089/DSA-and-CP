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

    vll h(n);
    for(auto&x:h){
        cin>>x;
        
    }
    unordered_set<ll> height;



    for (ll i = 0; i < n; i++)
    {
        height.insert(h[i]);
    }
    ll inititalheight=h[k-1];
    
    
    sort(all(h));

    ll idx = lower_bound(all(h),inititalheight) -h.begin();
    ll waterheight = 1;

    for (ll i = idx; i < n-1; i++)
    {

        if(h[i+1]==h[i]){
            continue;
        }
        ll difference = h[i+1]-h[i];
        inititalheight+=difference;
        waterheight+=difference;

        if(i==idx){
        if(h[i]<(waterheight-1)){
            cout<<"NO"<<endl;
            return;
        }
    }else{
        if(h[i]<(waterheight-1)){
            cout<<"NO"<<endl;
            return;
    }

    }
}
    cout<<"YES"<<endl;

    
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