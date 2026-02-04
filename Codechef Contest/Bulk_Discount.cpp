#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> price(n);
        for (int i = 0; i < n; i++)
        {
            cin>>price[i];
        }
        sort(price.begin(),price.end());
        
        int max_price = 0;
        for (int i = 0; i < n; i++)
        {
            if(i==0) {
                max_price += price[i];
            }
            else {
                max_price += max(0,price[i]-i);
                }
            }
        

        cout<<max_price<<endl;    
    }
    
    return 0;
}