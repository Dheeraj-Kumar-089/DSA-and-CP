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
    int n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;


    bool is0 = false;
    for (int i = 0; i < n; i++)
    {
        if(a[i] & 1)
        {
            a[i] += a[i] % 10;
        }
        if (a[i]%10 == 0)
        {
            is0 = true;
        }
    }

    bool isSame=true;

    for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                isSame=false;
            }
        }

     if(isSame){
        cout<<"Yes"<<endl;
        return;
     }

    

    if (is0)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            while ((a[i] % 10 != 2) && (a[i]%10!=0))
            {
                a[i] += a[i] % 10;
            }
            a[i] %= 20;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                cout << "No" << endl;
                return;
            }
        }

        cout << "Yes" << endl;
    }
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