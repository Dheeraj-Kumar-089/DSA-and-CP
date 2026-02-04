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

long long xortill(long long n)
{
    long long a = n % 4;
    if (a == 0)
        return n;
    else if (a == 1)
        return 1;
    else if (a == 2)
        return n + 1;
    else
        return 0;
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll arrxor = xortill(a - 1);

    if (arrxor == b)
        cout << a << endl;
    else if ((arrxor ^ b) != a)
        cout << a + 1 << endl;
    else
        cout << a + 2 << endl;
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