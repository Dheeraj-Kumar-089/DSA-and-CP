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

    vll even;
    vll odd;

    for (int i = 0; i < n; i++)
    {
        if (!(a[i] & 1))
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    if (even.size() >= 2)
    {
        cout << even[0] << " " << even[1] << endl;
        return;
    }
    else if (even.size() == 1)
    {
        for (int i = 0; i < odd.size() && odd[i] < even[0]; i++)
        {
            if (((even[0] % odd[i]) % 2) == 0)
            {
                cout << odd[i] << " " << even[0] << endl;
                return;
            }
        }
    }


        for (int i = 0; i < odd.size(); i++)
        {
            for (int j = i+1; j < odd.size(); j++)
            {
                if((odd[j]%odd[i])%2==0){
                    cout<<odd[i]<<" "<<odd[j]<<endl;
                    return;
                }
            }
            
        }
    

    cout<<-1<<endl;
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