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
    cin >> n >> k;

    vector<int> v(n);

    for(auto& x:v) cin>>x;

    if(k>=2) {
        cout<<"YES"<<endl;
        return;
    }
    else {
        if(is_sorted(v.begin(),v.end())) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}