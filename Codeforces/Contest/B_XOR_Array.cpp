// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;
// #define int long long
// #define vll vector<long long>
// #define vi vector<int>
// #define push push_back
// #define pop pop_back
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()

// void solve()
// {
//     int n, l, r;
//     cin >> n >> l >> r;

//     vll ans(n);

//     ans[0]=1;
//     int temp = 1;

//     for (int i = 1; i < n; i++)
//     {
//         if((i+1)==r){
//             ans[i]=temp^(l-1);
//             temp^=ans[i];
//             continue;
//         }
//         ans[i]=temp^(i+1);
//         temp ^= ans[i];
//     }
    

//     for (auto &x : ans)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


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
    int n, l, r;
    cin >> n >> l >> r;

    vll ans(n);

    ans[0]=1;
    int temp = 1;

    for (int i = 1; i < n; i++)
    {
        if((i+1)==r){
            ans[i]=temp^(l-1);
            temp^=ans[i];
            continue;
        }
        ans[i]=temp^(i+1);
        temp ^= ans[i];
    }
    

    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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