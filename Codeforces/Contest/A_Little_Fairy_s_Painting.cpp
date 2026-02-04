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
    
    set<int> distinct;
    for (int i = 0; i < n; i++)
    {
        distinct.insert(a[i]);
    }
    
    int totalDistinctColors = distinct.size();

    int ans = 0;
    if(distinct.find(totalDistinctColors)!=distinct.end()){
        cout<<totalDistinctColors<<endl;
    }else{
        for (auto &x:distinct)
        {
            if(x>=totalDistinctColors){
                cout<<x<<endl;
                return;
            }
        }
           
    }
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