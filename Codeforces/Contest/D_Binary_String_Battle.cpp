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

    unordered_map<ll,ll> freq;
    for (ll i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    

    if(freq['1']<=k){
        cout<<"Alice"<<endl;
        return;
    }

    if(k>n/2){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
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