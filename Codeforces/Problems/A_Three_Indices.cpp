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

    vll p(n);

    for(auto &x:p) cin>>x;

    ll i,j,k=0;

    for (ll m = 1; m < n-1; m++)
    {
        ll left=m-1;
        ll right = m+1;
        while(left>=0 and right<n){
            if(p[m]>p[left] and p[m]>p[right]){
                j=m+1;
                i=left+1;
                k=right+1;

                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<" "<<k<<endl;
                return;
                
            }
            
            if(p[m]>p[left]) right++;
            else if(p[m]>p[right]) left--; 
            else{
                right++;
                left--;
            }

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