#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
// #define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

bool is_palindrome(string s)
{
    int low = 0;
    int high = s.size() - 1;
    while (low < high)
    {
        if (s[low] != s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    

    // deque<string> q;
    // q.push_back(s);

    int low = 0;
    int high = n - 1;
    int ans = 0;

   
    while (low <= high)
    {
        if (s[low] == s[high])
        {
            low++;
            high--;
        }
        else if (s[++low] == s[high])
        {
            ans++;
            low++;
        }
        else if (s[low] == s[--high])
        {
            ans++;
            high--;
        }
    }
    
    cout << ans << endl;
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