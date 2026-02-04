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

    if (n == 0 or n == 3)
    {
        cout << "YES" << endl;
        return;
    }
    if (n == 1 or n == 2)
    {
        cout << "NO" << endl;
        return;
    }

    vll binary;
    while (n > 0)
    {
        binary.push_back(n % 2);
        n /= 2;
    }


    reverse(all(binary));
    
    while (!binary.empty() && binary.back() == 0)
    {
        binary.pop_back();
        
    }

    int size = binary.size();
    
    if ((size&1) and binary[size/2]){
        cout << "NO" << endl;
        return;
    }

    

    bool isPalindrome = true;
    for (ll i = 0, j = binary.size() - 1; i < j; i++, j--)
    {
        if (binary[i] != binary[j])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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