#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<char> s(n);
       for (int i = 0; i < n; i++)
       {
        cin>>s[i];
       }
       vector<char> t(n);
       for (int i = 0; i < n; i++)
       {
        cin>>t[i];
       }

       int counts0 = count(s.begin(),s.end(),'0');
       int counts1 = count(s.begin(),s.end(),'1');
       int countt1 = count(t.begin(),t.end(),'1');
       int countt0 = count(t.begin(),t.end(),'0');

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if(abs(counts0 - countt0) == ((2*i)+1) || abs(counts1 - countt1) == ((2*i)+1)) {
                flag = 0;
                break;
            } 
        }
        
       if(flag==0) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
       
    
       
    }
    
    return 0;
}