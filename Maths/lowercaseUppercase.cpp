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
       
       char A = 'A';
       char b = 'b';
        //uppercase to lowercase 
       char a = A | ' ';
       cout<<a<<endl;
        //lowercase to uppercase
       char B = b&'_';
       cout<<B<<endl;
        //clear lsb till ith bit;
       int d = 59;
       int i=5;
       printBinary(d&(~((1<<i)-1)));

        //clear msb till ith bit
        printBinary(d&((1<<i)-1));

        //to check power of 2
        int n = 64;
        if(n&(n-1)) cout<<"not power of 2"<<endl;
        else cout<<"power of 2"<<endl;
        return 0; 
        
 }