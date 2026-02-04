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

bool is_palindrome(vll &v)
{
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        if (v[l] != v[r])
            return false;
        l++;
        r--;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    ll low = 0;
    ll high = n - 1;

    ll todelete1 = 0;
    ll todelete2 = 0;
    while (low < high)
    {
        if (a[low] == a[high])
        {
            low++;
            high--;
        }
        else
        {
            todelete1 = a[low];
            todelete2 = a[high];
            break;
        }
    }

    vll new1, new2;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != todelete1)
            new1.push_back(a[i]);
        if (a[i] != todelete2)
            new2.push_back(a[i]);
    }

    if (is_palindrome(new1) || is_palindrome(new2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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
