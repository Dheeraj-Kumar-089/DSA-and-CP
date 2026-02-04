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
    ll negativecount = 0;
    ll minimum = LLONG_MAX;
    ll totalsum = 0;
    

    vll a(n);
    for(auto&x:a) {
        cin>>x;
        totalsum+=abs(x);
        if(x<0) negativecount++;
        if(abs(x)<minimum){
            minimum=abs(x);
        }

    }

    if(negativecount&1) cout<<totalsum-2*minimum<<endl;
    else cout<<totalsum<<endl;



    


    


    
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