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
    string str;
    cin>>str;

    for (ll i = 1; i < n-1; i++)
    {
        if(str[i]==str[0] || str[i]==str[n-1]){
            cout<<"Yes"<<endl;
            return;
        }
    }

    unordered_map<char,ll> mp;
    for (ll i = 1; i < n-1; i++)
    {
        mp[str[i]]++;
        if(mp[str[i]]>1){
            cout<<"Yes"<<endl;
            return;
        }
    }

    cout<<"No"<<endl;

    
       

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