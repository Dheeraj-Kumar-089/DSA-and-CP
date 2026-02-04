#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int count0 = count(v.begin(),v.end(),0);
        int count1=0;
        for (int i = 1; i < n-1; i++)
        {
            if (v[i]==0 && v[i-1]!=0 && v[i+1]!=0)
            {
                count1++;
            }
            
        }

        if(n==1){
            if(v[0]==0) {
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<1<<endl;
                continue;

            }
        }
        if(n==2){
            if(v[0]==0 && v[1]==0) {
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<1<<endl;
                continue;

            }
        }
          
        if(count0==n) cout<<0<<endl;
        else if(count1>=1) cout<<2<<endl;
        else cout<<1<<endl;
     
    }
    
    return 0;
}
