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
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(auto& p:v) cin>>p;

    int maxdifference = v[0];
    for (int i = 1; i < n; i++)
    {
        int difference = v[i]-v[i-1];
        maxdifference = max(difference,maxdifference);

    }

    int lastdifference = (x - v[n-1])*2;

    if(lastdifference>maxdifference) cout<<lastdifference<<endl;
    else cout<<maxdifference<<endl;
    
   
    
    
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