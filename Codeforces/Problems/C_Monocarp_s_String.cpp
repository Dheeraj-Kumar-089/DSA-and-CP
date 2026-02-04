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

    string s;
    cin >> s;
    vll temp(n);
    ll counta = 0;
    ll countb = 0;


    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            temp[i] = 1;
            counta++;
        }
        else
        {
            temp[i] = -1;
            countb++;
        }
    }

    ll difference = counta-countb;

    if (difference == 0)
    {
        cout << 0 << endl;
        return;
    }

    map<ll, ll> preSumMap;
    preSumMap[0]=-1;
    ll suma = 0;
    ll minLen = n;

    for (ll i = 0; i < n; i++)
    {

        suma += temp[i];
        
        preSumMap[suma] = i;
    
        ll rem = suma - difference;

        if (preSumMap.find(rem) != preSumMap.end())
        {
            ll len = i - preSumMap[rem];
            minLen = min(minLen, len);
        }

 
    }

    if (minLen == n)
        cout << -1 << endl;
    else
        cout << minLen << endl;
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