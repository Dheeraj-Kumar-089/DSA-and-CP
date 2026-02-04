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
    int l, a, b;
    cin>>l>>a>>b;

    if(b==1){
        cout<<l-1<<endl;
        return;
    }

    if(b>=l){
        cout<<a<<endl;
        return;
    }

    int max = l-1;
    if(l%b==0){
    while((a+b)<=l){
        
        a+=b;
        max = a;
    }}
    cout<<max<<endl;

   
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