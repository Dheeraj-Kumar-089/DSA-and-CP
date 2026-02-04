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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int countA = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            countA++;
    }

    for (int j = 1; j <= q; j++)
    {
        int a;
        cin >> a;
        if (countA == n)
        {
            cout << a << endl;
            continue;
        }
        int time = 0;

        while (a > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'A')
                {
                    a -= 1;
                    time++;
                   
                }
                else
                {
                   a /= 2;
                    time++;
                }

                if (a <= 0)
                    break;
            }
        }
        cout << time << endl;
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