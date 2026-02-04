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

    vll a(n);
    vll b(n);


    for(auto &x:a) {
        cin>>x;
        
    }
    for(auto &x:b) {
        cin>>x;
        
    }

    vll longestsubarraya(2 * n + 1, 0);
    vll longestsubarrayb(2 * n + 1, 0);
 
    ll counter = 1;
        for (ll i = 1; i < n; i++) 
        {
            if (a[i] == a[i - 1])
                counter++;
            else
            {
                longestsubarraya[a[i - 1]] = max(longestsubarraya[a[i - 1]], counter);
                counter = 1;
            }
        }
        longestsubarraya[a[n - 1]] = max(longestsubarraya[a[n - 1]], counter);
 
        counter = 1;
 
        for (ll i = 1; i < n; i++) 
        {
            if (b[i] == b[i - 1])
                counter++;
            else
            {
                longestsubarrayb[b[i - 1]] = max(longestsubarrayb[b[i - 1]], counter);
                counter = 1;
            }
        }
        longestsubarrayb[b[n - 1]] = max(longestsubarrayb[b[n - 1]], counter);
 
        ll maxfreq = -1;
        for (ll i = 1; i <= 2 * n; i++) 
            maxfreq = max(maxfreq, longestsubarraya[i] + longestsubarrayb[i]);
 
        cout << maxfreq << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}