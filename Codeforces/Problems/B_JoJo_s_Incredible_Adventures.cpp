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
    string s;
    cin>>s;

    ll count = 0;
    ll maximum1 = 0;

    if(s.size()==1){
        cout<<s<<endl;
        return;
    }


    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='1'){
            count++;
        }else{
            count = 0;
        }
        
        maximum1 = max(maximum1,count);
    }
    


    ll i = 0;

    if(count!='0' and count!=s.size()){
        while (s[i]!='0')
        {
            count++;
            i++;
        }

        maximum1 = max(maximum1,count);     
    }

    if(count==s.size()){
        ll total = s.size()*s.size();
        cout<<total<<endl;
        return;
    }



    ll ans = 0;
    for (ll i = maximum1,j=1; i >= 1,j<=maximum1; i--,j++)
    {

        ans = max(i*j,ans);
    }

    cout<<ans<<endl;
    

    

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