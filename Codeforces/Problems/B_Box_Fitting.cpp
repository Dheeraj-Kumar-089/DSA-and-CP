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

    int n, w;
    cin >> n >> w;

    map<int, int, greater<int>> freq;

    vll a(n);
    for (auto &x : a)
    {
        cin >> x;
        freq[x]++;
    }

    int ans = 0;
    while (freq.size())
    {
        int sum=0;

        for (auto it=freq.begin();it!=freq.end();)
        {

            while (it->second > 0 && sum + it->first<=w)
            {
                
                sum+=it->first;
                it->second--;
                
            }
            if(it->second==0){
                it=freq.erase(it);
            }else ++it;
            
        }
        ans++;

    }


    cout << ans << endl;
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