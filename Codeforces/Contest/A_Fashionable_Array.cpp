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
    int n;
    cin >> n;
    vi v(n);
    for(auto& x:v) cin>>x;

    sort(all(v));
    if((v[0]+v[n-1])%2==0) {
        cout << 0 << endl;
    }
    else if(n==1){
        if(v[0]%2==1) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
    }
}
    else if(n==2){
        if((v[0]+v[1])%2==1) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else
    {
        int ans=0;
        if(v[0]%2==1){
            int oddcount=0;
            for (int i = 0; i < v.size(); i++)
            {
                if(v[i]%2==0) break;

                oddcount++;
            }
            
            int evencount=0;
            for (int i = v.size()-1; i >=0; i--)
            {
                if(v[i]%2==1) break;

                evencount++;
            }
            ans=min(oddcount, evencount);
        }else{
            int evencount=0;
            for (int i = 0; i < v.size(); i++)
            {
                if(v[i]%2==1) break;

                evencount++;
            }
            
            int oddcount=0;
            for (int i = v.size()-1; i >=0; i--)
            {
                if(v[i]%2==0) break;

                oddcount++;
            }

            ans=min(oddcount, evencount);
        }

        cout << ans << endl;
    }
    return;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}