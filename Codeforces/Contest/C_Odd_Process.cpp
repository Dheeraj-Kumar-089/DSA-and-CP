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

    vll a(n);
    for (auto &x : a)
        cin >> x;

    vll even;
    vll odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            odd.push_back(a[i]);
        }
        else
        {
            even.push_back(a[i]);
        }
    }

    sort(rall(even));
    sort(rall(odd));
    vll ans(n);

    int evensize= even.size();
    int oddsize = odd.size();

    vll prefixsumEven(even.size() + 1, 0);
    for (int i = 0; i < even.size(); i++) {
        prefixsumEven[i+1] = prefixsumEven[i] + even[i];
    }


    for (int i = 0; i < n; i++)
    {
        int k = i + 1; 

        
        if (odd.empty()) {
            ans[i] = 0;
            continue;
        }
        
        int evencount = min(evensize, k - 1); 
        int oddcount = k - evencount; 
   
        if (oddcount % 2 == 0) {
            evencount--;
            oddcount++;
        }

       
        if (evencount < 0 || oddcount > odd.size()) {
            ans[i] = 0; 
        } else {
            
            ans[i] = odd[0] + prefixsumEven[evencount];
        }
    }

    for (auto el : ans)
    {
        cout << el << " ";
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