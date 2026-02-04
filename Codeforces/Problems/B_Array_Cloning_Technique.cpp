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

    vll array(n);
    for(auto &x:array) cin>>x;

    if(n==1) {
        cout<<0<<endl;
        return;
    }

    unordered_map<ll,ll> freq;

    for (int i = 0; i < n; i++)
    {
        freq[array[i]]++;
    }

    ll maxfreq=0;

    ll ans = 0;

    for(auto& pair:freq){
        if(pair.second>maxfreq){
           maxfreq=pair.second;
        }
    }


    if(maxfreq==n){
        cout<<0<<endl;
        return;
    }


    ll remaining = n-maxfreq;

    while (remaining>0)
    {
   
        ans+=1;
        if(remaining>=maxfreq){
        remaining-=maxfreq;
        ans+=maxfreq;
        maxfreq+=maxfreq;
        }
        else{
            
            ans+=remaining;
            remaining=0;
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