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
    ll n, m, k;
    cin >> n >> m >> k;

    vll applicants(n);
    vll aparatments(m);

    for (int i = 0; i < n; i++)
        cin >> applicants[i];
    for (int i = 0; i < m; i++)
        cin >> aparatments[i];
    

    sort(applicants.begin(),applicants.end());
    sort(aparatments.begin(), aparatments.end());

    ll i = 0, j = 0;
    ll cnt = 0;
    while (i < n && j < m)
    {
        if (((applicants[i] - k) < aparatments[j]) && ((applicants[i] + k) > aparatments[j]))
        {
            cnt++;
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}