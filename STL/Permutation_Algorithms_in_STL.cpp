#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    copy(v.begin(),v.end(),v1.begin());
    next_permutation(v.begin(), v.end());
        for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

    prev_permutation(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }
    
    
    
    
    
    return 0;
}