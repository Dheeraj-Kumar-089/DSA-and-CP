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
    int n, s;
    cin >> n >> s;

    vi array(n);
    for (auto &x : array)
        cin >> x;

    int ans = 0;
    int maximum = max(array[n-1],s);
    int minimum = min(s,array[0]);

    if(s>array[0] and s<array[n-1]){
    if((array[n-1]-array[0]+1)%2==0){

        if(s<=floor((maximum+minimum)/2.0)){
            ans+=s-minimum;

        }else{
        ans+=maximum-s;
        }
    }else{

        if(s<=((maximum+minimum)/2.0)){
            ans+=s-minimum;

        }else{
        ans+=maximum-s;
        }
    }
}

    ans+=maximum-minimum;
    cout<<ans<<endl;

    // // Optimal Solution

    // if (s > array[0] and s < array[n - 1])
    // {
    //     cout << (array[n - 1] - array[0]) + min(s - array[0], array[n - 1] - s) << endl;
    //     return;
    // }

    // if (s <= array[0]) {
    //     cout << (array[n - 1] - s) << endl;
    //     return;
    // }

    // if (s >= array[n - 1]) cout << (s - array[0]) << endl;
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