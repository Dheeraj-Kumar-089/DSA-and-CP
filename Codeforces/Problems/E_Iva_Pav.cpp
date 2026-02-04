#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fil(i,x,n) for (int i = x; i < n; i++)
#define fdl(i,x,n) for (int i = x; i >= n; i--)
#define nl endl

int pre[30][200001];

int rangeand(int l, int r) {
    int ans = 0;
    for (int i = 0; i < 30; i++) {
        if (pre[i][r + 1] - pre[i][l] == 0) {
            ans += (1 << i);
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    
    vll a(n);
    for(auto&x:a) cin>>x;
    
    int q;
    cin>>q;
    
    
    
	for (int j = 0; j < 30; j++) {
        pre[j][0] = 0; 
		for (int i = 0; i < n; i++) {
            
            if ((1 << j) & a[i]) {
                pre[j][i + 1] = pre[j][i];
			} else {
                pre[j][i + 1] = pre[j][i] + 1;
			}
		}
	}

	while (q--) {
		int l, k;
		cin >> l >> k;
		l--; 

		if (a[l] < k) {
			cout << -1 << ' ';
			continue;
		}

		
		int low = l, high = n - 1;
		while (low < high) {
			int mid = (low + high + 1) / 2; 
			if (rangeand(l, mid) >= k) {
				low = mid; 
			} else {
				high = mid - 1; 
			}
		}
		cout << low + 1 << ' '; 
	}
	cout << nl;




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