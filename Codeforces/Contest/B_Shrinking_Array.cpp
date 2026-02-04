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

bool isIncreasingSorted(vll &v){
    for (ll i = 0; i < v.size()-1; i++)
    {
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
    
}

bool isDecreasingSorted(vll &v){
    for (ll i = 0; i < v.size()-1; i++)
    {
        if(v[i]<v[i+1]){
            return false;
        }
    }
    return true;
    
}

void solve(){
    ll n;
    cin>>n;

    vll v(n);

    for(auto& x:v) cin>>x;


    for (ll i = 0; i < v.size(); i++)
    {
        if(abs(v[i+1]-v[i])<=1){
            cout<<0<<endl;
            return;
        }
    }
    

    if(isIncreasingSorted(v) || isDecreasingSorted(v)) cout<<-1<<endl;
    else cout<<1<<endl;

    

    
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