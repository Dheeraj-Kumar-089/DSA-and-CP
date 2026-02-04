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
    int n, c;
    cin >> n >> c;

    vi vitamins(n);
    vi cost(n);

    for (auto &x : vitamins)
        cin >> x;
    for (auto &x : cost)
        cin >> x;

    unordered_map<int, int> distinct;

    for (int i = 0; i < n; i++)
    {
        if(distinct.count(vitamins[i])) distinct[vitamins[i]]=min(distinct[vitamins[i]],cost[i]);
        else distinct[vitamins[i]] = cost[i];
    }

    vector<int> vec;
    for(auto &[x,y]:distinct) vec.push_back(y);
    sort(vec.begin(),vec.end());

    int maximum = 0;
    for (int i = distinct.size(); i >= 1; i--)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += vec[j];
        }

        int temp = c * i - sum;
        maximum = max(maximum, temp);
    }

    cout << maximum << endl;
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