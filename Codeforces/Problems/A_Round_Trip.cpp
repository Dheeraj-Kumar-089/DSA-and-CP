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
    int r0,x,d,n;
    cin>>r0>>x>>d>>n;

    string s;
    cin>>s;
    int ans=0;
    int difference = r0-x;


    if(difference<0){
        cout<<n<<endl;
        return;
    }

    if(difference>=0){
        for (int i = 0; i < n; i++)
        {
            if(r0<x){
                int remaining = n-i;
                ans+=remaining;
                break;
            }
            if(s[i]=='1'){
                r0 = max(0LL, r0 - d);
                ans++;
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

