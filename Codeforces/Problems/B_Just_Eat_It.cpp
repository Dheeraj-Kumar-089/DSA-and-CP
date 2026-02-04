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

int maxSubarraySum(vll arr, int n, int &ansStart, int &ansEnd)
{
    int maxi = LONG_MIN;
    int sum = 0;

    int start = 0;
    ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++)
    {

        if (sum == 0)
            start = i + 1;

        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;

            ansStart = start;
            ansEnd = i + 1;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

void solve()
{
    int n;
    cin >> n;

    vll a(n);
    bool isHappy = false;
    for (auto &x : a)
    {
        cin >> x;
    }

    int ansStart, ansEnd;

    int totalYesserTastiness = accumulate(all(a), 0LL);
    int totalAdelTastiness = maxSubarraySum(a, n, ansStart, ansEnd);

    if (ansStart == 1 and ansEnd == n)
    {

        cout << "YES" << endl;
    }
    else if (totalYesserTastiness > totalAdelTastiness)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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