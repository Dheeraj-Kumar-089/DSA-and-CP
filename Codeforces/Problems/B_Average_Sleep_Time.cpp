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
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    int weeks = n - k + 1;

    long double averagesum = 0.0L;

    int minimum = min(weeks,k);

    vll prefixsum(minimum);

    int totalsum = 0;
    for (auto x : a)
        totalsum += x;

    int i = 0;
    int j = n - 1;
    prefixsum[0] = totalsum;
    int l = 1;
    while (i < j && l < minimum)
    {
        prefixsum[l] = prefixsum[l - 1] - a[i] - a[j];
        l++;
        i++;
        j--;
    }
    
    for (int m = 0; m < minimum; m++)
    {
        averagesum += (long double)prefixsum[m];
    }
    
 

    cout << fixed << setprecision(6) << averagesum / weeks << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}