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
    string s, t;
    cin >> s;
    cin >> t;

    map<char, int> freqs;
    map<char, int> freqt;
    for (int i = 0; i < s.size(); i++)
    {
        freqs[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        freqt[t[i]]++;
    }

    for (auto &pair : freqs)
    {
        if (freqt[pair.first] < pair.second)
        {
            cout << "Impossible" << endl;
            return;
        }
    }
    for (auto &pair : freqs)
    {
        if (freqt.find(pair.first) != freqt.end())
        {
            freqt[pair.first] -= pair.second;
        }
    }

    string ans;
    int j = 0;
    for (auto &pair : freqt)
    {

        while (j<s.size() && s[j]<=pair.first)
        {
            ans += s[j];
            j++;
        }
        ans = ans + string(pair.second, pair.first);
    }

    while (j < s.size())
    {
        ans += s[j];
        j++;
    }

    cout<<ans<<endl;


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