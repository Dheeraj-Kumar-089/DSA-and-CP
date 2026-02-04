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

vector<int> frequency;

bool check(int n, int m, int t, vll frequency)
{
    long long maxPossible = 0;

    for (int i = 0; i < n; i++)
    {
        if (t < frequency[i])
        {
            maxPossible += t;
        }
        else
        {
            maxPossible += (frequency[i] + (t - frequency[i]) / 2);
        }
    }

    return (maxPossible >= m);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == m)
    {
        cout << 1 << endl;
        return;
    }

    frequency.assign(n, 0);

    vll a(m);
    for (int i = 0; i < m; i++) 
    {
        int x;
        cin >> x;
        frequency[x - 1]++;
    }

    int low = 0;
    int high = 2 * m;

    while (low < high)
    {
        int mid = low + (high - low)/2;

        if (check(n, m, mid, frequency))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low << endl;
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