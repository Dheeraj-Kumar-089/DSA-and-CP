#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        int a,b,c;
        cin>>n>>a>>b>>c;
        long long int sum=a+b+c;
        long long int no_of_loops=(n/sum);
        int remainder= n%sum;
        long long int days = no_of_loops*3;
         int count=0;
        if (count<remainder)
            {
                count+=a;
                days++;
            }
        if (count<remainder)
            {
                count+=b;
                days++;
            }
        if (count<remainder)
            {
                count+=c;
                days++;
            
        }
    
        
        cout<<days<<endl;

    }
    
    return 0;
}