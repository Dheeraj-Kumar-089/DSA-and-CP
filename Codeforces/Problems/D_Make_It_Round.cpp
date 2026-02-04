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
    int n, m;

    cin >> n >> m;
    
    int powersOf2[20];
    int powersOf5[20];

    powersOf2[0]=powersOf5[0]=1;

    for (int i = 1; i <= 19; i++)
    {
        powersOf2[i] = 2 * powersOf2[i - 1];
        powersOf5[i] = 5 * powersOf5[i - 1];
    }

    int temp = n;
    int noOfFactors2=0;
    int noOfFactors5=0;
    while (temp%2==0)
    {
        noOfFactors2++;
        temp/=2;
    }

    
    while (temp%5==0)
    {
        noOfFactors5++;
        temp/=5;
    }

    for (int dig = 18; dig >= 0; dig--)
    {
        int extra2 = max(0LL, dig - noOfFactors2);
        int extra5 = max(0LL, dig - noOfFactors5);

        int need = powersOf2[extra2]*powersOf5[extra5];
        if (need <= m)
        {

            int largestK = m - m % need;
            cout << largestK * n << endl;
            return;
        }
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