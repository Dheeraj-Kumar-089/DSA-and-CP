#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        multiset<int> ms;
        for (int i = 0; i < n; ++i)
        {   
            int m;
            cin>>m;
            ms.insert(m);
        }
        int max = *ms.rbegin();
        ms.erase(--ms.end());
        int ved_height= k + max;
        int sum = accumulate(ms.begin(),ms.end(),0)+p;
        if (ved_height>sum) cout<<"Ved"<<endl;
        else if (ved_height==sum) cout<<"Equal"<<endl;
        else cout<<"Varun"<<endl;
        
    }
    
    return 0;
}