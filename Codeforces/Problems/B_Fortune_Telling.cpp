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
    int n,x,y;
    cin>>n>>x>>y;

    vll a(n);
    for(auto&x:a) cin>>x;


    int totalsum = accumulate(all(a),0LL)+x;

    if((y&1 && totalsum&1) || (!(totalsum&1) && !(y&1))){
        cout<<"Alice"<<nl;
    }else{
        cout<<"Bob"<<nl;
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