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
    string s;
    cin>>s;

    int count=0;
    int maxcount=0;
    int dotcount=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='.'){
            count++;
            dotcount++;

        }
        else{
            count=0;
        }

        maxcount=max(count,maxcount);
    }

    if(maxcount==0) cout<<0<<endl;
    else if(maxcount>=3) cout<<2<<endl;
    else cout<<dotcount<<endl;
    
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