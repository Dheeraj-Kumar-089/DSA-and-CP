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
    ll n,k,x;
    cin>>n>>k>>x;

    ll minsum = (k*(k+1))/2;
    ll totalsum = (n*(n+1))/2;
    ll difference = n-k;
    ll differencesum = (difference*(difference+1))/2;
    ll maxsum = totalsum-differencesum;

    if(x>=minsum && x<=maxsum) cout<<"YES"<<endl;
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