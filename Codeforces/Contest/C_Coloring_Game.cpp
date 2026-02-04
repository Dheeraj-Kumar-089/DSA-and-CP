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
        cin >> n;
		vector<ll> a(n);
		for(auto &x : a) cin >> x;

		ll ans = 0;
		for(ll i = 0; i < n-2; i++) {
			for(ll j = i+1; j < n-1; j++) {
				auto it = lower_bound(a.begin()+j+1, a.end(), a[i]+a[j]);
				ll end = it - (a.begin()+j+1);

				if(end == 0) continue;


				it = upper_bound(a.begin()+j+1, a.begin()+j+end+1, a[n-1]-a[i]-a[j]);
                
				ans += (a.begin()+j+end+1) - it;
               
			}
		}

		cout << ans << endl;

    
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