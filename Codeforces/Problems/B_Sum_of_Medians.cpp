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

    vll v(n*k);

    for(auto &x:v) cin>>x;

    ll gap = n - ceil(n/2.0);

    ll ans = 0;


    for (ll i = (n*k-1)-gap; i >= 0; i-=(gap+1))
    {
        
        ans+=v[i];
        k--;
        

        if(k==0){
            break;
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