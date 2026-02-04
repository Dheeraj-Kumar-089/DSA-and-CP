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
const int N = 200000;

vector<vector<int>> primefactor(N);

void primefactors(vector<vector<int>> &pf)
{
    for (int i = 2; i <= N; i++)
    {
        if (!pf[i].empty())
            continue;

        for (int j = i; j <= N; j += i)
            pf[j].push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    vll b(n);
    for (auto &x : b)
        cin >> x;

    unordered_map<int, int> freq;
    vll cost;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            continue;

        for (int el : primefactor[a[i]])
        {
            freq[el]++;
            if (freq[el] > 1)
            {
                cout << 0 << endl;
                return;
            }
        }
    }
    bool isOne = false;

    for (int i = 0; i < n; i++)
    {

        for (int el : primefactor[a[i]])
            freq[el]--;

        for (int el : primefactor[a[i] + 1])
        {
            freq[el]++;
            if (freq[el] > 1)
            {
                isOne = true;
                cost.push_back(b[i]);
            }
        }

        for (int el : primefactor[a[i] + 1])
            freq[el]--;

        for (int el : primefactor[a[i]])
            freq[el]++;
    }

    if (isOne)
        cout << *min_element(all(cost))<<endl;
    else
    {
        int firstmin = LLONG_MAX;
        int secondmin = LLONG_MAX;

        for (int num : b)
        {
            if (num < firstmin)
            {
                secondmin = firstmin;
                firstmin = num;
            }
            else if (num < secondmin)
            {
                secondmin = num;
            }
        }

        cout<<firstmin+secondmin<<endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    primefactors(primefactor);
    while (t--)
    {
        solve();
    }
    return 0;
}