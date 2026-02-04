#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fil(i, x, n) for (int i = x; i < n; i++)
#define fdl(i, x, n) for (int i = x; i >= n; i--)
#define nl "\n"

void solve()
{
    int n;
    cin >> n;

    set<int> st;
    vll u(n);
    fil(i, 0, n)
    {
        cin >> u[i];
        st.insert(u[i]);
    }

    vll s(n);
    fil(i, 0, n)
        cin >> s[i];

    vector<vector<int>> a(st.size() + 1);
    vector<vector<int>> b(st.size() + 1);

    vector<pair<int, int>> d(n);
    fil(i, 0, n)
    {
        d[i] = {u[i], s[i]};
    }

    sort(d.begin(), d.end(), [](const pair<int, int> &x, const pair<int, int> &y)
    {
        if (x.first != y.first)
            return x.first < y.first;   
        return x.second > y.second; 
    });

    int j = d[0].first;
    int k = 1;
    fil(i, 0, n)
    {
        if (j == d[i].first)
        {
            a[k].pub(d[i].second);
        }
        else
        {
            j = d[i].first;
            k++;
            a[k].pub(d[i].second);
        }
    }

   
    fil(i, 1, st.size() + 1)
    {
        b[i].pub(0); 
        int sum = 0;
        for (auto &el : a[i])
        {
            sum += el;
            b[i].pub(sum);
        }
    }

    vll ans(n + 1, 0);

    fil(j, 1, st.size() + 1)
    {
        int sz = a[j].size();
        fil(i, 1, sz + 1)
        {
            int m = (sz / i) * i;
            ans[i] += b[j][m];
        }
    }

    fil(i, 1, n + 1)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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