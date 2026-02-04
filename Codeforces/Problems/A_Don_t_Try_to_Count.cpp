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
    ll n,m;
    cin>>n>>m;

    string x,s;
    cin>>x>>s;



for(int j=0;j<n;j++){
            if(x.length()-j>=m){

            if(x.substr(j,s.length())==s){
            cout<<0<<endl;
            return;
            }
            
        }
    }
    
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        x.append(x);
        count++;
        if(x.length()>=m){
        for(int j=0;j<n;j++){
            if(x.length()-j>=m){

            if(x.substr(j,s.length())==s){
            cout<<count<<endl;
            return;
            }
            
        }
    }
    }
}
    cout<<-1<<endl;
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