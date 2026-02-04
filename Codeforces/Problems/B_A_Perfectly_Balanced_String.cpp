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
    string s;
    cin >> s;

    unordered_map<char, ll> freq;
    vector<char> distinct;
    for (ll i = 0; i < s.size(); i++)
    {
        if(freq.find(s[i])==freq.end()){
  
            distinct.push_back(s[i]);
        }
        freq[s[i]]++;
    }

    ll i = 0;
    while (i < s.size())
    {
        for (auto &ch: distinct)
        {
            if (i < s.size())
            {
                if (s[i] != ch)
                {
                    cout << "NO" << endl;
                    return;
                }
                i++;
            }
            else
                break;
        }
    }

    cout << "YES" << endl;
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