#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;

    cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        string s = to_string(n);
        
        while (n>0)
        {
            int flag=1;
            for (int i = 0; i < s.length()-1; i++)
            {
                
                if(s[i] == '3' && s[i + 1] == '3') {
                    flag = 0;
                    s.erase(i,2);
                    if (s.empty())n = 0;
                    else n = stoi(s);
                    break;
                }    
            }

            if(flag==1) {
                n=n-33;
                s = to_string(n);
            }

        }


        if (n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}