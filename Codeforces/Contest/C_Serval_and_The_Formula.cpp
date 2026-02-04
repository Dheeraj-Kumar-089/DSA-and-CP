#include <bits/stdc++.h>
using namespace std;

string decToBinary(int n) {
    string bin = "";
    
    while (n > 0) {
        int bit = n%2;
          bin.push_back('0' + bit);
        n /= 2;
    }
  
    reverse(bin.begin(), bin.end());
    return bin;
}

void solve() {
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;
        long long sum = x+y;
        string s;
        s = decToBinary(sum);
        reverse(s.begin(),s.end());
        



        

}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}