#include<bits/stdc++.h>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }

    void add(int ele){
        if (size==capacity)
        {
            capacity *= 2;
            int* arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i]=arr[i];
            }
            arr=arr2; //aaray 2 ko bhi array ke naam se use karne ke liye  
        }
        arr[size++]=ele; 
    }

    void print(){
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;        
    }

    void get(int idx){
        if (size==0)
        {
            cout<<"Array is Empty"<<endl;
        }
        else if (idx>=size || idx<0)
        {
            cout<<"Invalid Index"<<endl;
        }        
        else cout<<arr[idx]<<endl;
    }

    void remove(){
        if (size==0)
        {
            cout<<"Array is Empty"<<endl;
        }
        size--;
    }
};
int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(19);
    v.print();
    v.add(30);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(49);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
    v.get(10);
    v.get(2);
    v.remove();
    v.get(2);
    v.print();
    return 0;
}