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

ll binarysearch(ll low, ll h, vll &a)
{
    int high = h;
    int ans = h;


    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (a[mid] >= (h - mid + 1))
        {
            if (mid > 0 and (a[mid - 1] >= (h - (mid - 1) + 1)))
            {
                high = mid-1;
            }
            else
            {
                ans = mid;
                break;
            }
        }
        else
        {
            low = mid + 1;
        }

    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;
    vll ans;
    ans.push_back(1);

    for (ll i = 1; i < n; i++)
    {
        ll j = binarysearch(0, i, a);
        ans.push_back(i - j + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout << endl;
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