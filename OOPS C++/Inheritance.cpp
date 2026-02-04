#include<bits/stdc++.h>
using namespace std;


class Person{
    public:
        string name;
        int age;

        // // Default constructor
        // Person() {
        //     cout<<"parent constructor"<<endl; // This will be called first
        // }

        // Parameterized constructor
        Person(string name, int age) {
            this->name = name;
            this->age = age;
            cout<<"parent constructor"<<endl; // This will be called first
        }


};

class Student : public Person {
    public:
        int rollno;

       Student(string name,int age,int rollno) : Person(name,age) // only value is used to call the parent class constructor
        { // calling parent class from child class
            // cout<<"child constructor"<<endl; // This will be called after parent constructor
            cout<<"child constructor"<<endl; // This will be called after parent constructor
            this->rollno = rollno;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl;
        }

};
int main(){
    Student s1("John", 18, 123); 
    s1.getInfo(); 
    
    return 0;
}

//During deallocation the child class destructor is called first, then the parent class destructor is called.
// This ensures that the resources allocated in the child class are released before those in the parent class.