#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string t = s;
        reverse(t.begin(),t.end());
        bool flag=true;

        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i]!=s[i+1]){
                flag = false;
            }
        }
      
        if(n==1) cout<<"NO"<<endl;
        else if(flag==true) cout<<"NO"<<endl;
        else if(k==0){
            if(s<t) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}