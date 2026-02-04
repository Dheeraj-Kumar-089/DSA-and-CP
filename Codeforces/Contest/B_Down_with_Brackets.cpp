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
    string s;
    cin>>s;

        int cnt=0;
        vector<int> v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
            v.push_back(cnt);
        }
        
        
        if(count(v.begin(), v.end(),0)==1){
            cout<<"NO"<<endl;       
        }
        else cout<<"YES"<<endl;

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