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
    ll a,b;
    cin>>a>>b;

    ll minimum = INT_MAX;
    for (ll i = 0; i <= 100; i++)
    {
        ll tempb= b+i;
        ll count = 0;
        ll tempa=a;

        if(tempb==1) continue;

        while (tempa>0)
        {
            tempa/=tempb;
            count++;
        }
        
        minimum=min(minimum,count+i);
    }
    

    cout<<minimum<<endl;
    
    
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