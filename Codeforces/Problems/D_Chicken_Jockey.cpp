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


void solve(vector<int>& v, int l, int r) {
    // base case
    if (l >= r) return;

    int mid = (l + r) / 2;

    // work on left half
    solve(v, l, mid);

    // work on right half
    solve(v, mid + 1, r);

    // do something with v[l..mid] and v[mid+1..r]
    cout << "Left part: ";
    for (int i = l; i <= mid; i++) cout << v[i] << " ";
    cout << "\nRight part: ";
    for (int i = mid + 1; i <= r; i++) cout << v[i] << " ";
    cout << "\n---\n";
}

void solve(){
    ll n;
    cin>>n;

    vll a(n);
    for(auto&x:a) cin>>x;
    

    




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