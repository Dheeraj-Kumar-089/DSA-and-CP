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
    ll w,h;
    cin>>w>>h;

    ll y0;
    cin>>y0;
    vll lowerx(y0);
    for(auto &x:lowerx) cin>>x;

    ll yh;
    cin>>yh;
    vll upperx(yh);
    for(auto &x:upperx) cin>>x;

    ll x0;
    cin>>x0;
    vll lefty(x0);
    for(auto &x:lefty) cin>>x;

    ll xw;
    cin>>xw;
    vll righty(xw);
    for(auto &x:righty) cin>>x;

    ll maxvertical=max(lefty[x0-1]-lefty[0],righty[xw-1]-righty[0]);
    ll maxhorizantal=max(lowerx[y0-1]-lowerx[0],upperx[yh-1]-upperx[0]);


    ll maxarea=max(maxvertical*w,maxhorizantal*h);

    cout<<maxarea<<endl;



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