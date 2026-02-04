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

    vll a(n);
    for(auto&x:a) cin>>x;

    sort(all(a));
    ll low = 0;
    ll high = 1;
    while (high<n)
    {
        if(abs(a[low]-a[high])==k){
            cout<<"YES"<<endl;
            return;
        }else if(abs(a[low]-a[high])>k){
            low++;
        }else{
            high++;
        }
    }
    
    
     cout<<"NO"<<endl;
    
    

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