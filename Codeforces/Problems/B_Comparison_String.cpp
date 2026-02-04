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
    cin>>n;
    string s;
    cin>>s;

    int ans = 0;
    int maximum = 0;
    for (int i = 0; i < n-1; i++)
    {
        char temp=s[i];
        if(s[i+1]==temp){
            ans++;
        }else{
        
        ans=0;
        }


        maximum = max(maximum,ans);

    }

    cout<<maximum+2<<endl;
    
}

int main(){
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