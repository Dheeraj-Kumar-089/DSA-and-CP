#include <bits/stdc++.h>
using namespace std;


const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()



void solve(){
    int n;
    cin >> n;

    vll a(n+1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    
    
    a[n]=a[0];
    int cost = 0;
    
    for (int i = 0; i < n; i++)
    {
        cost += max(a[i],a[i+1]);
    }

    
    cost -= *max_element(all(a));

    cout << cost << endl;
}

int32_t main(){
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