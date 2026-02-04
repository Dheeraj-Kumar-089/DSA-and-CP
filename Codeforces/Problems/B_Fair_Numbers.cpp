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

    
    for (ll i = 1; i <= 2521; i++)
    {
        bool isDivisible=true;
        string s = to_string(n);
        vector<char> todivide;
        for (ll j = 0; j < s.size(); j++)
        {
            if(s[j]!='0') todivide.push_back(s[j]);

        }

        for (auto &x:todivide)
       {
            if((n%(x-'0'))!=0){
                isDivisible=false;
                break;
            }
        }

        if(isDivisible==false) n++;
        else{
            
            break;
        }
        
        
    }


    cout<<n<<endl;
    
    


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