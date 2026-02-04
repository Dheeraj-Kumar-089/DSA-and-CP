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

    vll b(n);

    for(auto&x:b) cin>>x;

    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }

    if(s.size()<n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


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