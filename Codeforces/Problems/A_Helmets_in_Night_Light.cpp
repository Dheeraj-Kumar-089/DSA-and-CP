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

    ll n, p;
    cin >> n >> p;

    vll a(n);
    for (auto &x : a)
        cin >> x;
    vll b(n);
    for (auto &x : b)
        cin >> x;

    vector<pair<ll, ll>> vec;

    for (ll i = 0; i < n; i++)
    {
        vec.push_back({b[i], a[i]});
    }

    sort(vec.begin(), vec.end(), [](pair<ll, ll> a, pair<ll, ll> b)
         {
        if (a.first == b.first) return a.second > b.second; 


        return a.first < b.first; });

    if (n == 1)
    {
        cout << p << endl;
        return;
    }

    ll minimumcost = p;
    ll count = 1;

    for (ll i = 0; i < n; i++)
    {

        if (vec[i].first >= p)
        {
            break;
        }
        if ((count + (vec[i].second)) <= n)
        {
            minimumcost += (vec[i].first) * (vec[i].second);
            count += (vec[i].second);
        }
        else
        {
            minimumcost += (n - count) * (vec[i].first);
            count = n;
            break;
        }
    }

    minimumcost+=(n-count)*p;
    

    cout << minimumcost << endl;
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