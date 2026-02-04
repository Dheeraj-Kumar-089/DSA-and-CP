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
    ll x,n;

    cin>>x>>n;

 
        ll finalpos;
        if (n % 4 == 1)
            finalpos = -n;
        else if (n % 4 == 2)
            finalpos = 1;
        else if (n % 4 == 3)
            finalpos = n + 1;
        else if (n % 4 == 0)
            finalpos = 0;
 
        if (x % 2 == 0)
            finalpos = x + finalpos;
        else
            finalpos = x - finalpos;
 
        cout << finalpos << endl;
    
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