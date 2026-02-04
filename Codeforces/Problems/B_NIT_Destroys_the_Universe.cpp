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

    vll v(n);
    for(auto& x:v) cin>>x;

    if(n==1){
        if(v[0]==0) cout<<0<<endl;
        else cout<<1<<endl;
        return;
    } 

    ll count0 = count(v.begin(),v.end(),0);
    if(count0==n){
        cout<<0<<endl;
        return;
    }

    ll i = 1;
    ll count = 0;
    while (i<n)
    {
        if(v[i-1]==0 and v[i]!=0){
            count++;
        }
        i++;
    }

    if(count>1) {
        cout<<2<<endl;
        return;
    }
    else if(count==0){
        if(v[0]!=0) cout<<1<<endl;
        return;
    }
    else {
        if(v[0]!=0) cout<<2<<endl;
        else cout<<1<<endl;

        return;
    }    
    
    
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