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
    ll n,j,k;
    cin>>n>>j>>k;

    vll a(n);
    ll maximum=INT_MIN;
    
    for(auto&x:a) {
        cin>>x;
        if(x>=maximum){
            maximum=x;
        }
    }

    if(k==1){
        if(a[j-1]==maximum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }else{
        cout<<"YES"<<endl;
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