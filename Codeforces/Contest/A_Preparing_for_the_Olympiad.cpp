#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        int maximum = 0;
        for (int i = 0; i < n-1; ++i)
        {
            if(a[i]>b[i+1]){
                maximum = maximum+ a[i]-b[i+1];

            }
            else continue;
        }
        maximum = maximum + a[n-1];
        cout<<maximum<<endl; 
        



    }
    
    return 0;
}