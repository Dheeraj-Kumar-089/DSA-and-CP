#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        char vowels[5] = {'a','e','i','o','u'};
        int count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            
            bool isVowel = false;
            for (int j = 0; j < 5; j++)
            {
                if(s[i]==vowels[j]){
                    isVowel=true;
                    count = 0;
                    break;
                }
                
            }
        if(!isVowel) count++;
        if (count>=4) {
            flag = true;
            break;
            }
            
            
        }
    
    if(flag==true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    

    }
    
    return 0;
}