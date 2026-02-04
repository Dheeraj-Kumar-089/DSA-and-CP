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
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    map<char, ll> char_count;
    for (char c : str) {
        char_count[c]++;
    }

    ll unpaired = (n-2*k)/2;

    ll left_unpaired_0 =  char_count['0'] - unpaired;
    ll left_unpaired_1 = char_count['1'] - unpaired;

    if(left_unpaired_0%2==0 && left_unpaired_1%2==0 && left_unpaired_0>=0 && left_unpaired_1>=0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}