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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];


    ll minimum_operations = INT_MAX;
    for (int i = 0; i < n; i++) 
        minimum_operations = min(minimum_operations, abs(a[i]));
    
    cout << minimum_operations << endl;
    return 0;
}