#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,l,u;
    cin>>n>>s>>l>>u;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    auto it = find(v.begin(), v.end(), s);
    if (it!=v.end())
    {
        cout<<"YES"<<" ";
    }
    else
    {
        cout<<"NO"<<" ";
    }
    auto it1 = lower_bound(v.begin(), v.end(), l);
    cout<<*it1<<" ";
    auto it2 = upper_bound(v.begin(), v.end(), u);
    cout<<*it2<<" ";
    
    
    
    return 0;
}