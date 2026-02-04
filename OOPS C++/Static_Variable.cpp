#include<bits/stdc++.h>
using namespace std;

void fun(){
    static int x = 0; // Static variable
    cout<<"x : "<<x<<endl;
    x++; // Increment the static variable
}
int main(){
    fun(); // Output: 0
    fun(); // Output: 1
    fun(); // Output: 2
    
    return 0;
}