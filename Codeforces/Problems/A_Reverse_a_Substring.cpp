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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll previous = 0;
    ll startidx = 0;
    ll lastidx = 0;
    bool isLexographical = true;

    for (ll i = 0; i < s.size(); i++)
    {
        if ((s[i] - 'a') >= previous)
        {
            previous = s[i] - 'a';
        }
        else
        {
            isLexographical = false;
            break;
        }
    }

    if (isLexographical)
    {
        cout << "NO" << endl;
        return 0;
    }

    ll firstword = s[0] - 'a';
    ll startingword = 0;

    for (ll i = 1; i < s.size(); i++)
    {
        if ((s[i] - 'a') > firstword)
        {
            startingword = s[i] - 'a';
            startidx = i+1;
            break;
        }
    }

    for (ll i = startidx; i < s.size(); i++)
    {
        if((s[i]-'a')<startingword){
            lastidx = i+ 1;
            break;
        }
    }

    if(startidx==0)
    cout<<"YES"<<endl;
    cout<<startidx<<" "<<lastidx<<endl;
    
}
