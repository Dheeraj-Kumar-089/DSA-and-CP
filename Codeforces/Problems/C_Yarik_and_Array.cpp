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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    { 
        cin >> a[i];
    }

    ll currentSum = a[0];
    ll maxSum = a[0];

    if(a[0]<0){
        currentSum = 0;
    }

    
    

    for (ll i = 1; i < n; i++)
    {
        if((a[i]&1)==(a[i-1]&1)){
            currentSum=a[i];
        }
        else{
            currentSum+=a[i];
        }

        maxSum = max(maxSum,currentSum);

        if(currentSum<0) currentSum = 0;


    }
    


    
    cout << maxSum << endl;
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

// optimal solution

// void solve()
// {

//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for (int i = 0; i < n; i++)
//     { 
//         cin >> v[i];
//     }
//     ll ans = INT_MIN;
//     int i = 0, j = 0;
//     ll sum = 0;
//     while (j < n)
//     { 
//         if (sum < 0)
//         {
//             sum = 0;
//             i = j;
//         }
//         if (i < j)
//         {
//             if ((v[j] ^ v[j - 1]) & 1)
//             {
//                 sum += v[j];
//             }
//             else
//             {
//                 sum = v[j];
//                 i = j;
//             }
//         }
//         else
//         {
//             sum = v[j];
//         }
//         ans = max(ans, sum);
//         j++;
//     }
//     cout << ans << endl;
// }