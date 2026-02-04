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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int ans = 0;
    int count0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count0++;
    }

    if (count0 == n)
    {
        cout << 0 << endl;
        return;
    }
    vll index;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            index.push_back(i+1);
        }
    }

    if(index.size()==1){
        cout<<1<<endl;
        return;
    }

    for (int i = 1; i < index.size(); i++)
    {
        
        int difference = index[i]-index[i-1]-1;
        if(difference>=(k-1)) ans++;
    }
    
    
 
    cout << ans + 1 << endl;
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