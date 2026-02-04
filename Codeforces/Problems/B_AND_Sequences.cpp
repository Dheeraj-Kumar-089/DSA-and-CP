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

int fact(int n){
    int factorial = 1;

    fil(i,2,n+1){
        factorial=(1LL*factorial*i)%MOD;
    }
    return factorial;
}
void solve(){
    int n;
    cin>>n;

    vll a(n);
    for(auto&x:a) cin>>x;

    int bitwiseand = a[0];

    fil(i,1,n){
        bitwiseand&=a[i];
    }
    int count = 0;

    fil(i,0,n){
        if(bitwiseand==a[i]){
            count++;
        }
    }

    cout<<((count*(count-1)%MOD)*fact(n-2))%MOD<<nl;
    

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