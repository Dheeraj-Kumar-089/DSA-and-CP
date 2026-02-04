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
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            ans++;
        }
        if(s[i]=='1'){
            int temp = 0;

            while (i<n && (temp+1)<=k)
            {
                temp++;
                i++;
                if(s[i]=='1') temp = 0;
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