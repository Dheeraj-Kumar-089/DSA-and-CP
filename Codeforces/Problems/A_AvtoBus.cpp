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


    ll minimum = 0;
    ll maximum = 0;

    if(n<4 or n&1){
        cout<<-1<<endl;
        return;
    }

        if (n % 6 == 0)
            minimum = n / 6;
        else
        {
            if (n % 6 == 4 || n % 6 == 2){
                minimum = ((n / 6) + 1);
                }
        }
    
    if(n%4==0) maximum = n / 4;
    else if(n%4==2) maximum=(n/4);
    

    cout << minimum << " " << maximum << endl;
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