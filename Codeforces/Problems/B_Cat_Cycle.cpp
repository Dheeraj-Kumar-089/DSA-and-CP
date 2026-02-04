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

    ll ans = 0;

    if((n&1)==0){
        if((k%n)==0){
            cout<<n<<endl;
        }else{
            ans = k%n;
            cout<<ans<<endl;
        }
        return;
    }else{
        ll mid = n/2;
        ll gap = k/mid;
        if(gap*mid==k) gap-=1;
        ans = (gap + k)%n;
        if(ans==0) cout<<n<<endl;
        else cout<<ans<<endl;
        return;
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