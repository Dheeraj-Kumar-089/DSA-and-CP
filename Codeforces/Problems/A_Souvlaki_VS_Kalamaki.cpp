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
    {
        cin >> x;

    }

    sort(all(a));
    bool flag = true;

    for (int i = 1; i < n-1; i+=2)
    {
        if(a[i]!=a[i+1]){
            flag=false;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

    

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