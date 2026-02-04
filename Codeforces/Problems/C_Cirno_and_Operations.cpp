#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<long long int> v(n);
        for (int i = 0; i < v.size(); i++)
        {
            cin>>v[i];
        }
        
        if (n==2){
            long long int add = v[0] + v[1];
            long long int difference = v[0] - v[1];
            if(add>difference) cout<<add<<endl;
            else cout<<difference<<endl;
        }
        while (v.size()>1)
        {
        
        reverse(v.begin(),v.end());
        vector<long long int> temp(v.size());
        for(int i = 1; i < temp.size(); i++)
        {

            temp[i]=v[i]-v[i-1];
        }
        for (int i = 1; i < temp.size(); i++)
        {

            v[i]=temp[i];
        }
        v.erase(v.begin());

        }
        if(n==1) cout<<v[0]<<endl;
        
        if(n>3) cout<<setprecision(19)<<v[0]<<endl;

    }
    
    return 0;
}