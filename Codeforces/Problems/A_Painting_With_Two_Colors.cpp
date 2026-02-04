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
    ll n,a,b;
    cin>>n>>a>>b;

    if(n&1){
        if(a&1){
            if(b&1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if((b&1) and b>a){
                cout<<"YES"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
        }
    }else{
        if((a&1)==0){
            if((b&1)==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if((b&1)==0 and b>a){
                cout<<"YES"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
        }
    }


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