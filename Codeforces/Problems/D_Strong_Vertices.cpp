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
    
    vll b(n);
    for(auto&x:b) cin>>x;

    vll difference(n);

    int maximum = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        difference[i]=a[i]-b[i];
        maximum=max(maximum,difference[i]);
    }
    vll ans;

    for (int i = 0; i < n; i++)
    {
        if(difference[i]==maximum) ans.push_back(i+1);
    }

    cout<<ans.size()<<endl;
    for(auto&x:ans){
        cout<<x<<" ";
    }
    cout<<endl;


        
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