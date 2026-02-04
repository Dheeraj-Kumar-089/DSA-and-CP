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

    vll p(n);
    for(auto&x:p) cin>>x;
    


    vll ans;

    ans.push_back(p[0]);

    for (int i = 1; i < n-1; i++)
    {
        if(((p[i]-p[i-1])*(p[i+1]-p[i]))<0){
            ans.push_back(p[i]);
            
        }
    }
    ans.push_back(p[n-1]);
    

    cout<<ans.size()<<endl;
    for(auto& x:ans){
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