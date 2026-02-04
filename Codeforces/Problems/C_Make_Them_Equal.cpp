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

    char c;
    cin>>c;

    string s;
    cin>>s;

    int idx = -1;
    bool allc=true;

    for (ll i = 0; i < n; i++)
    {
        if(s[i]==c) idx = i;
        else allc=false;
    }

    if(allc){
        cout<<0<<endl;
        return;

    }


    if(idx==-1){
        cout<<2<<endl<<n-1<<" "<<n<<endl;
    }else if(idx==n-1){
        cout<<1<<endl<<idx+1<<endl;
    }else if(idx>=n/2){
        cout<<1<<endl<<idx+1<<endl;
    }
    else{
        cout<<2<<endl<<n-1<<" "<<n<<endl;
    }
    



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