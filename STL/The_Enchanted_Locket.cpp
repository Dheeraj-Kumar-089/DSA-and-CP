#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        v.push_back(s);
        if((count(v.begin(),v.end(),s))!=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}