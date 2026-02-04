#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fil(i,x,n) for (int i = x; i < n; i++)
#define fdl(i,x,n) for (int i = x; i >= n; i--)
#define nl endl

void solve(){
    int n;
    cin>>n;

    vll h1(n);
    for(auto&x:h1) cin>>x;
    
    vll h2(n);
    for(auto&x:h2) cin>>x;

    int temp = 1;
    
    if(h1[0]>=h2[0]){
        
    }
    int maxsum = max(h1[0],h2[0]);
    int currsum = 0;

    for (int i = 1; i < n; i++)
    {
        
    }
    
}

int32_t main(){
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