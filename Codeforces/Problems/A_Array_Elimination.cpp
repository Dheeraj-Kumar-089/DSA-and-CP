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
    
    map<int,int> freq;

    vll ans;
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]&(1<<i)) freq[i]++;
        }
        
    }

    int gcd = 0;
    for (auto& pair:freq)
    {
        gcd = __gcd(gcd,pair.second);
    }
    

    for (int i = 1; i <= gcd; i++)
    {
        if(gcd%i==0) ans.push_back(i);
    }
    if(gcd==0){
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
        
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    
    


    

    

    // for(auto& pair:temp){
    //     for (auto& el:pair)
    //     {
    //         cout<<el<<" ";
    //     }
    //     cout<<endl;
        
    // }
    // cout<<endl;

    
    
    
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