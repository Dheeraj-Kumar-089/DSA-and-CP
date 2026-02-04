#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    
    string s;
    cin>>s;

    string new_s;
    int freqw=0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    { 
        if(s[i]=='v'){
            count++;
            
        }else{
            count = 0;
            new_s+='o';
        }
        if(count == 2){
            new_s+='w';
            freqw++;
            count = 1;
        }
    }

    if(new_s.size()==0){
        cout<<0<<endl;
        return;
    }
    
    vll countw(new_s.size(),0);
    countw[0]=(new_s[0]=='o')?0:1;
    for (int i = 1; i < new_s.size(); i++)
    {
        if(new_s[i]=='w') countw[i]=countw[i-1]+1;
        else countw[i]=countw[i-1];
    }


    int ans=0;
    count = 0;

    for (int i = 1; i < new_s.size(); i++)
    {
        if(new_s[i]=='o') count++;
        else{
            ans+=(count)*countw[i-1]*(freqw-countw[i-1]);
            count = 0;
        }

    }

    cout<<ans<<endl;
    


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}