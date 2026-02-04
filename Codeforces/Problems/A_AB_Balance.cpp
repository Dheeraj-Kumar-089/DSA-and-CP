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
    string s;
    cin>>s;
    int n = s.size();

    if(s[0]==s[n-1]){
        cout<<s<<endl;
        return;
    }

    if(s[0]=='a'){
        s[0]='b';
    }
    else{
        s[0]='a';
    }

    cout<<s<<endl;



       
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