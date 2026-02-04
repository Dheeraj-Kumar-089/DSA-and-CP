#include<bits/stdc++.h>
 using namespace std;

 void printBinary(int n)
 {
     for(int i=15;i>=0;i--)
     {
         if(n&(1<<i))
         {
             cout<<"1";
         }
         else
         {
             cout<<"0";
         }
     }
     cout<<endl;
 }

 int main(){
        int n,i;
        cin>>n;
        printBinary(n);
        i=2;
        if(((1>>i)&n) != 0 ){ // Check if ith bit is set or not
            cout<<"set bit"<<endl;
        } 
        else{
            cout<<"not set bit"<<endl;
        }

        printBinary((n|(1<<i))); // Set ith bit
        printBinary((n&(~(1<<i)))); // unset ith bit
        printBinary((n^(1<<i))); // toggle ith bit
        // cout<<__builtin_parity(n)<<endl; // Find the parity of the number
        // cout<<__builtin_ffs(n)<<endl; // Find the first set bit
        // cout<<__builtin_ctz(n)<<endl; // Count the number of trailing zeros
        // cout<<__builtin_clz(n)<<endl; // Count the number of leading zeros
        // cout<<__builtin_popcount(n)<<endl; // Count the number of set bits
        return 0; 
        
 }