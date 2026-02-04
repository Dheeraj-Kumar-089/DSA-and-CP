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

    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    bool isPossible = false;

    if (count == 0)
        isPossible = true;

    vll ans(n);
    ans[0] = (s[0] == '(' ? 1 : -1);

    if (isPossible)
    {

        for (int i = 1; i < n; i++)
        {

            if (s[i] == '(')
            {

                ans[i] = ans[i - 1] + 1;
            }
            else
            {

                ans[i] = ans[i - 1] - 1;
            }
        }
    }
    else
    {
        cout << -1 << endl;
        return;
    }

    if (*min_element(ans.begin(), ans.end()) == 0)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
        cout << endl;
        return;
    }
    else if (*max_element(ans.begin(), ans.end()) == 0)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
        cout << endl;
        return;
    }

    cout << 2 << endl;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] > 0)
            cout << 1 << " ";
        else if (ans[i] < 0)
            cout << 2 << " ";
        else
            cout << (ans[i - 1] <= 0 ? 2 : 1) << " ";
    }
    cout << endl;
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