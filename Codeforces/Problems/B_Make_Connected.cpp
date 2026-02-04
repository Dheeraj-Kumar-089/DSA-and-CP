#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    multiset<int> sum, difference;
    multiset<int> x,y;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                sum.insert(i + j);
                difference.insert(i - j);
                x.insert(i);
                y.insert(j);
            }
        }
    }





    if(x.size()<2 ){
        cout << "YES" << endl;
        return;
    }

    bool isPossible = false;
    isPossible |= ( (*(--x.end()) - *x.begin() <= 1) && (*(--y.end()) - *y.begin() <= 1) );
    isPossible |= (*(--sum.end()) - *sum.begin() <= 1);
    isPossible |= (*(--difference.end()) - *difference.begin() <= 1);

    if(!isPossible) cout << "NO" << endl;
    else cout << "YES" << endl;

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
