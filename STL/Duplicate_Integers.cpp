#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        vector<long int> v(n);
        for (long int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        vector<int> v2(100,0); 
        for (int i = 0; i < n; ++i)
        {if (v[i] >= 1 && v[i] <= 100)
            { v2[v[i] - 1]++; }
        }

        bool flag=true;
        for (int i = 0; i < v2.size(); ++i)
        {
            if (v2[i]!=1 && v2[i]!=0)
            {
                flag = false;
                cout<<"YES"<<endl;
                break;
            }
            
        }
        if (flag==true)
        {
            cout<<"NO"<<endl;
        }

            
    } 
    
    
}