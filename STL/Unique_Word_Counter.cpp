#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<string> us;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        us.insert(s);
    }

    cout<<us.size();
    
    return 0;
}