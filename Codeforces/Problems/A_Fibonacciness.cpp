#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> v(5);

        for (int i = 0; i < 5; i++)
        {
            if(i==2) continue;
            else cin>>v[i];
        }
         
        int maxcount=INT_MIN;
        for (int i = -100; i <= 100; i++)
        {
            v[2]=i;
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                
                if(v[i+2]==(v[i]+v[i+1])){
                    count++;
                }
            } 
            if(count>maxcount) maxcount=count;         
        }


        cout<<maxcount<<endl;
    }
    
    return 0;
}