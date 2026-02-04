#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;

    for (int level = 2; level <= 60; level++)
    {
        int low = 2;
        int high = 1000000000LL;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            
            int val = 1;
            int term = 1; 
            bool overflow = false;

            for (int i = 1; i <= level; i++) {

                if (term > LLONG_MAX / mid) {
                    overflow = true;
                    break;
                }
                term *= mid;

                
                if (val > LLONG_MAX - term) {
                    overflow = true;
                    break;
                }
                val += term;
            }
            
            
            if (overflow || val > n) {
                high = mid - 1;
            } else if (val < n) {
                low = mid + 1;
            } else { 
                cout << "YES" << endl;
                return;
            }
           
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
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