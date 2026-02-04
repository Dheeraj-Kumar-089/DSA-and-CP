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
    ll n;
    cin>>n;

    string s;
    cin>>s;

    vll prefixcountbeginning(n+1,0);
    vll hashmap(26,0);
    prefixcountbeginning[0]=0;


    for (ll i = 1; i < n+1; i++)
    {
        hashmap[s[i-1]-'a']++;

        if(hashmap[s[i-1]-'a']==1){
            prefixcountbeginning[i]=prefixcountbeginning[i-1] + 1;
        }else{
            prefixcountbeginning[i]=prefixcountbeginning[i-1];

        }

    }

    vll prefixcountending(n+1,0);
    vll temphashmap(26,0);


    for (ll i = n-1; i >= 0; i--)
    {
        temphashmap[s[i]-'a']++;

        if(temphashmap[s[i]-'a']==1){
            prefixcountending[i]=prefixcountending[i+1] + 1;
        }else{
            prefixcountending[i]=prefixcountending[i+1];
            
        }

    }


    ll maximum = 0;

    for (ll i = 1; i < n; i++)
    {
        
        maximum = max(maximum,prefixcountbeginning[i]+prefixcountending[i]);
    }

    cout<<maximum<<endl;

    
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