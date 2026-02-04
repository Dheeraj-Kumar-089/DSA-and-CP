#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    string s,t;
    cin>>s>>t;

    int n=s.size();
    int m = t.size();
    if(s==t) {
        cout<<"YES"<<endl;;
        return;
    }

   vector<int> frequency(26,0);
   for (int i = 0; i < m; i++)
   {
    frequency[t[i]-'A']++;
}


for (int i = n-1   ; i >=0 ; i--)
{
    if(frequency[s[i]-'A'] > 0) frequency[s[i]-'A']--;
    else s[i] = '.';
}

string finalstring = "";

for (int i = 0; i < n; i++)
{
    if(s[i]!='.') finalstring+=s[i];
}

if(finalstring==t) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}


    


int main(){
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