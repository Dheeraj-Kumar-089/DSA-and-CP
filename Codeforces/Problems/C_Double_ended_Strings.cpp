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
    string a,b;
    cin>>a>>b;

    int an = a.size();
    int bn = b.size();
    
    int totallength = an+bn;
    int minimum = totallength;
    if(an>bn){
        for (int i = 0; i < bn; i++)
        {
            string temp;
            for (int j = i; j < bn; j++)
            {
                temp.push_back(b[j]);
                if(a.find(temp)!=string::npos){
                    int remove = totallength - (2 * temp.size());
                    minimum= min(minimum, remove);
                }
                
            }
            
            
        }
        
    }else{
        for (int i = 0; i < an; i++)
        {
            string temp;
            
            for (int j = i; j < an; j++)
            {
                
                temp.push_back(a[j]);
                if(b.find(temp)!=string::npos){
                    int remove = totallength - (2 * temp.size());
                    minimum= min(minimum,remove);
                }
                
            }
            
            
        }
    }


    cout<<minimum<<endl;
    
    
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