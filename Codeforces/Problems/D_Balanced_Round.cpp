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

    vll difficulty(n);
    for(auto &x:difficulty) cin>>x;

    sort(difficulty.begin(),difficulty.end());

    ll count = 0;
    ll maximum = 0;
    for (int i = 0; i < n-1; i++)
    {
        if((difficulty[i+1]-difficulty[i])<=k){
            count++;         
        }else{
            count=0;
        }
        maximum = max(maximum,count);
    }

    cout<<n-maximum-1<<endl;
    


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