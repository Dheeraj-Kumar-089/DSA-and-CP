#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

            for (int i = 0; i < n; i++)
            {
                if(k>=v[i]) {
                    k=k-v[i];
                    cout<<1;
                }
                else cout<<0;
            }
            
        
        
        cout<<endl;
    }
    
    return 0;
}