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
    for(auto&x:a) cin>>x;
    
    unordered_map<ll,ll> freq;

    for (ll i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    if (freq.size()==1)
    {
        if(freq.find(0)==freq.end()){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }

    if (freq.size()==2)
    {
        if(freq.find(0)!=freq.end()){
            cout<<"NO"<<endl;
            return;
        }else if(freq.find(-1)!=freq.end()){
            cout<<"YES"<<endl;
            return;
        }


    }

    cout<<"NO"<<endl;

    


    
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