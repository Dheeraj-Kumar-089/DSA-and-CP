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
    cin>>n>>k;

    vector<vll> v(n, vll(n));

    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            cin >> v[i][j];

    

    for (ll i = 0; i < (n+1)/2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if((n&1) and i==(n/2) and j==(n/2)) break;

            if(v[i][j]!=v[n-i-1][n-j-1]){
                if(k==0) {
                    cout<<"NO"<<endl;
                    return;
                }else{
                    k--;
                }
            }
                     
        }
        
    }


    if((n&1)==0 and (k&1)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;



    
    

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