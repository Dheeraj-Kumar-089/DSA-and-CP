#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        long long int maxi = INT_MIN,mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);
        }

        cout<<maxi-mini<<endl;
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
