#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 4;
    int b = 7;

    a = a ^ b; 
    b = b ^ a;  // b = b ^ a = b ^ a ^ b = a
    a = a ^ b;  // a = a ^ b = a ^ b ^ a = b    

    cout<<a<<" "<<b<<endl; 
    return 0; 

    
}