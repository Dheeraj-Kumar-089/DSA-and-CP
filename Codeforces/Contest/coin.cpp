#include <bits/stdc++.h>
using namespace std;

unordered_map<long long int,long long int> coin;

long long int helper(long long int n) {
    if (n<=3 && n>=0) {
        return 1;
    }
    if (coin.find(n)!=coin.end()) {
        return coin[n];
    }
    coin[n] = helper(n/4) + helper(n/4);
    return coin[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        long long int result= helper(n);
        cout<<result<<endl;
    }
    return 0;
}