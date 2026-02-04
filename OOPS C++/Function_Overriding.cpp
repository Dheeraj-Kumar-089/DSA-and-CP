#include<bits/stdc++.h>
using namespace std;


class Parent{
    public:
    void getInfo(){
        cout<<"Parent class"<<endl;
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout<<"Child class"<<endl;
    }
};
int main(){
    Child c1;
    c1.getInfo(); // Calls Child class method
    
    return 0;
}