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

    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }

    unordered_map<char, ll> counta;
    unordered_map<char, ll> countb;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '0')
            counta['0']++;
        else
            counta['1']++;

        if (b[i] == '0')
            countb['0']++;
        else
            countb['1']++;
    }

    if (counta['0'] != countb['0'] or counta['1'] != countb['1'])
    {
        cout << "NO" << endl;
        return;
    }

    counta['0'] = 0;
    counta['1'] = 0;
    countb['0'] = 0;
    countb['1'] = 0;

    ll lastindex = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '0')
            counta['0']++;
        else
            counta['1']++;

        if (b[i] == '0')
            countb['0']++;
        else
            countb['1']++;

        if (counta['0'] == counta['1'])
        {
            string reverse;
            int length = i - lastindex + 1;

            for (ll j = lastindex; j <= i; j++)
            {
                if (a[j] == '0')
                    reverse.push_back('1');
                else
                    reverse.push_back('0');
            }

            if ((a.substr(lastindex, length) != b.substr(lastindex, length)) and (b.substr(lastindex, length) != reverse))
            {
                cout << "NO" << endl;
                return;
            }

            lastindex = i + 1;

            counta['0'] = 0;
            counta['1'] = 0;
            countb['0'] = 0;
            countb['1'] = 0;
        }
    }

    for (ll i = lastindex; i < n; i++)
    {
        if(a[i]!=b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    

    cout << "YES" << endl;

    return;
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