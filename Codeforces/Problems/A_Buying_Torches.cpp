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
    ll x,y,k;
    cin>>x>>y>>k;

    ll totalSticksforCoal = k*y;
    ll totalsticksNeeded = totalSticksforCoal + k - 1;

    ll stickTrades = (totalsticksNeeded + (x-2))/(x-1); //ceil(sticksNeeded/(x-1))

    ll totalTrades = stickTrades + k;


    
    cout<<totalTrades<<endl;
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