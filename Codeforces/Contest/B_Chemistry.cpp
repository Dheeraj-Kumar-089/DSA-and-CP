#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
 
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    int oddfreqChar = 0;
    for(auto& pair : freq) {
        if (pair.second % 2 == 1) {
            oddfreqChar++;
        }
    }
    if(oddfreqChar>k+1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
 
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