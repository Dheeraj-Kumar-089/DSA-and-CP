#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

ll lcm(ll num1, ll num2)
{
    return (num1 * num2) / (__gcd(num1, num2));
}

ll calculateSum(ll start, ll end)
{
    ll sum = ((start + end) * (end - start + 1)) / 2;
    return sum;
}

void solve()
{

    ll n, x, y;
    cin >> n >> x >> y;

    ll count1 = (n / x) - (n / lcm(x, y));
    ll count2 = (n / y) - (n / lcm(x, y));

    ll ans = calculateSum(n - count1 + 1, n) - calculateSum(1LL, count2);

    cout << ans << endl;
}

int main()
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