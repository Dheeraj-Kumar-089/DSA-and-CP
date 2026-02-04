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

    string a;
    cin>>a;

    ll m;
    cin>>m;

    string b,c;
    cin>>b>>c;

    for (ll i = 0; i < m; i++)
    {
        if(c[i]=='D'){
            a.push_back(b[i]);

        }else{
            a.insert(a.begin(), b[i]);
        }
    }
    cout<<a<<endl;
    
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