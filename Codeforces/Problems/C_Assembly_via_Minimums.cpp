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

    ll size=(n*(n-1))/2;



    vll a(size);
    for(auto&x:a) {
        cin>>x;

    }

    sort(all(a));

    ll i = 0;
    ll j=1;
    while (i<size)
    {
        cout<<a[i]<<" ";
        i+=(n-j);
        j++;
    }
    
    ll max = 1e9;
    cout<<max<<endl;
    





    
    
    

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