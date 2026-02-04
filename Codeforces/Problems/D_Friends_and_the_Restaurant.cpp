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

    vll x(n);
    for(auto&xx:x) cin>>xx;

    vll y(n);
    for(auto&yy:y) cin>>yy;
    

    vll difference;
    
   ll ans=0;

    for (ll i = 0; i < n; i++)
    {
        difference.push_back((y[i]-x[i]));
    }

    sort(all(difference));

    ll low = 0;
    ll high = n-1;

    while (low<high)
    {
        if((difference[low]+difference[high])>=0){
            ans++;
            low++;
            high--;
            
        }else if((difference[low]+difference[high])<0){
            low++;
        }
        
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

