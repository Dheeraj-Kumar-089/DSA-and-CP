#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;
    cin>>n;

    vll a(n);
    for(auto&x:a) cin>>x;
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,a[i]);
        if(i&1) a[i]=maxi;
    }
    int mini=LLONG_MAX;
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        if((i&1)==0) {
            if(i==0) mini=a[i+1];
            else if(i==(n-1)) mini=a[i-1];
            else mini=min(a[i-1],a[i+1]);

            if(a[i]<mini) continue;
            else{
                ans+=a[i]-mini+
                1;
            }
        }
    }

    cout<<ans<<endl;
    
    
}

int32_t main(){
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