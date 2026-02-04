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
    ll n,x;
    cin>>n>>x;

    vll a(n);
    ll ans = 0;
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) cin >> a[j];
            for (int j = 0; j < n; j++) {
                if ((x | a[j]) != x) break;
                ans |= a[j];
            }
        }
        if (ans == x) cout << "Yes\n";
        else cout << "No\n";

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