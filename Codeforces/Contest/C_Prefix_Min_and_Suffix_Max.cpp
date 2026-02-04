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

    vll a(n);
    for(auto &x:a) cin>>x;

    vll minimum(n);
    ll minindex=-1;
    vll maximum(n);
    ll maxidx=-1;
    ll maximumsuffix=INT_MIN;
    ll minimumprefix=INT_MAX;

    for (ll i = n-1; i >= 0; i--)
    {
        if(a[i]>maximumsuffix){
            maximumsuffix=a[i];
            maximum[i]=maximumsuffix;
        }else{
            maximum[i]=maximumsuffix;
        }
        
    }

    for (ll i = 0; i < n; i++)
    {
        if(a[i]<minimumprefix){
            minimumprefix=a[i];
            minimum[i]=minimumprefix;
        }else{
            minimum[i]=minimumprefix;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if(minimum[i]==a[i] or maximum[i]==a[i]){
            cout<<1;
        }else{
            cout<<0;
        }
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