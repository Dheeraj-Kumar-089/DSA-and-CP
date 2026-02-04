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
    int n;
    cin>>n;

    vector<int> s(n);
    for(auto&x:s) cin>>x;
    
    int totalsum=accumulate(all(s),0);
    

    unordered_map<int,int> unique;
    for (int i = 0; i < n; i++)
    {
        unique[s[i]]++;
    }

    int notins=0;
    for (int i = 0; i <=50; i++)
    {
        if(unique.find(i)==unique.end()){
            notins=i;
            break;
        }
    }


    if(notins==0){
        cout<<totalsum<<endl;
        return;
    }else{
        cout<<unique[0]+totalsum<<endl;
    }



    
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