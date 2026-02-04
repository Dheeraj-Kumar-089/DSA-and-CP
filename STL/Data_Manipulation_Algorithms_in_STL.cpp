#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    iota(v.begin(),v.end(),x);
    reverse(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    
    return 0;
}