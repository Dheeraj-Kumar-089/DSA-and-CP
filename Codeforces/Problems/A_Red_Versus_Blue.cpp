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
    ll n,r,b;
    cin>>n>>r>>b;

    ll section = b+1;

    ll sectionlength = (r)/(section);
    ll temp = sectionlength;

    ll remaining = r-(section*sectionlength);

    string ans;

    ll i=0;

    while(i<n)
    {
        while (sectionlength--)
        {
            ans.push_back('R');
            i++;  
        
        }

        if(remaining>0){
                ans.push_back('R');
                remaining--;
                i++;
            }
            

        if(i<n)
        {
        
            
        ans.push_back('B');
        i++;
    }
        sectionlength = temp;
        
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