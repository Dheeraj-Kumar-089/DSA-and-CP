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


ll power(ll exponent)
{
    
    ll result = 1;
    for (ll i = 1; i <= exponent; i++)
    {
        result *= 3;
    }
    return result;
}

ll coins(ll x){

    if(x==0) return 3;

    ll temp = power(x-1)*x+power(x+1);
    return temp;
}


void solve(){
    ll n;
    cin>>n;

    ll ans = 0;

    while (n>0)
    {

        ll p3 = 1;
        ll exponent = 0;
        while (p3 <= n / 3) {
            p3 *= 3;
            exponent++;
        }

        ll multiple = n/power(exponent);
        
        ans+=coins(exponent)*multiple;
        n=n-power(exponent)*multiple;

    }

    cout<<ans<<endl;
    
    
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