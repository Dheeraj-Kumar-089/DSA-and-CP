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
    cin>>n;

    vll a(n);
    for(auto&x:a) cin>>x;

	int ans = 0; 
	int x = INT_MAX, y = INT_MAX; 
	for (int i = 0; i < n; i++) {
		if (x > y) {
			swap(x, y); 
		}
		
		if (a[i] <= x) {
			x = a[i]; 
		} else if (a[i] <= y) {
			y = a[i];
		} else {
			
			x = a[i];
			ans++;
		}
    }
	

	cout << ans << endl;
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