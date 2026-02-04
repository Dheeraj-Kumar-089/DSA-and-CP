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

bool maxPossiblek(int k, vector<pair<int, int>> &segments, int n)
{

    bool isPossible = true;

    int intersectionl = 0;
    int intersectionr = 0;

    for (int i = 0; i < n; i++)
    {
        int l1 = intersectionl - k;
        int r1 = intersectionr + k;

        int l2 = segments[i].first;
        int r2 = segments[i].second;

        intersectionl = max(l1, l2);
        intersectionr = min(r1, r2);

        int intersectionlength = intersectionr - intersectionl;
        if (intersectionlength < 0)
        {
            isPossible = false;
            break;
        }
    }
    return isPossible;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> segments(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        segments[i] = {x, y};
    }

    int low = 0;
    int high = 1e9;

    while (low < high)
    {
        int mid = (low + high) >> 1;

        if (maxPossiblek(mid, segments, n))
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