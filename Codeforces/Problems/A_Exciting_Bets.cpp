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
    ll a,b;
    cin>>a>>b;

    ll difference = abs(b-a);
    ll steps=0;


    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }

    if(a==0 and b!=0) {
        cout<<difference<<" "<<0<<endl;
        return;
    }
    
    if(b==0 and a!=0){
        cout<<difference<<" "<<0<<endl;
        return;
    }


    steps = min(min(a,b)%difference, difference-min(a,b)%difference);


    cout<<difference<<" "<<steps<<endl;
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