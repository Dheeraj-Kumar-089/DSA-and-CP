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

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    ll ans = 0;

    for (auto it = st.begin(); it != st.end();)
    {
        if (st.find(*it - 1) == st.end())
        {
            int x = *it;
            while (st.find(x) != st.end())
            {
                st.erase(st.find(x));
                x++;
            }
            ans++;
            it = st.begin();
        }
        else
        {
            ++it;
        }
    }
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