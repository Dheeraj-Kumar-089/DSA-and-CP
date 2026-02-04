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

    string s;
    cin>>s;

    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            count++;

        }
    }

    if(n&1){
        if(s[n/2]=='0' and count>=3){
            cout<<"ALICE"<<endl;
            return;
        }
    }
    

    cout<<"BOB"<<endl;
    

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