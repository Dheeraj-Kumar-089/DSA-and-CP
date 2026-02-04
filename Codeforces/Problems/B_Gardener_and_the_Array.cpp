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

    map<int,int> bitcount;
    vector<vector<int>> setbits(n);

    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        
        for (int j = 0; j < p; j++)
        {
            int x;
            cin>>x;
            bitcount[x]++;
            setbits[i].push_back(x);

        }
    }

    
    for (int i = 0; i < n; i++)
    {
        bool ans = true;
        for (int j = 0; j < setbits[i].size(); j++)
        {
            if(bitcount[setbits[i][j]]<=1) ans=false;
        }
        

        if(ans){
            cout<<"Yes"<<endl;
            return;
        }
        
    }

    cout<<"No"<<endl;
    return;
    
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