#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fora(i, n) for (int i = 0; i < n; ++i)
#define ford(i, a, b) for (int i = a; i >= b; --i)

void solve()
{
    int n;
    cin >> n;

    map<int,int> temp;
    vll a(n);
    for (auto &x : a)
    {
        cin >> x;
        temp[x]++;
    }

    if (n == 2)
    {
        cout << 0 << endl;
        cout << endl;
        return;
    }

    int totalsum = accumulate(all(a), 0LL);

    vll sumOfArrayExectItself(n);

    fora(i, n)
    {
        sumOfArrayExectItself[i] = totalsum - a[i];
    }

    vll ans;

    fora(i, n)
    {
        if (sumOfArrayExectItself[i] % 2 == 0)
        {
            int toFind = sumOfArrayExectItself[i] / 2;

            if(temp.find(toFind)!=temp.end()){
                if(toFind==a[i]){
                    if(temp[toFind]>1){
                        ans.push_back(i+1);
                    }
                }else{
                    ans.push_back(i+1);
                }
            }
        }
    }

    cout << ans.size() << endl;
    fora(i, ans.size())
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}