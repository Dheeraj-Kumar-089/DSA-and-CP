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
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='B'){
            count++;
            if(count==k){
                cout<<0<<endl;
                return;
            }
        }else{
            if(count==0) continue;

            count=0;
        }
    }

    ll ans=0;
    for (ll i = 0; i < k; i++)
    {
        if(s[i]=='B'){
            continue;
        }else{
            ans++;
        }
    }
    
    ll low=1;
    ll high=k;
    ll minans=ans;

    while(high<n){
        
        if(s[high]=='B' and s[low-1]=='W') ans--;
        if(s[high]=='W' and s[low-1]=='B') ans++;



        minans=min(minans,ans);
        high++;
        low++;

        
    }
    
    cout<<minans<<endl;
    

    
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