#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
        string name;
        double* cgpaPtr; // Pointer to CGPA

        // Default constructor
        Student(string name, double cgpa) {
            this->name = name;
            cgpaPtr = new double; // Dynamically allocate memory for CGPA
            *cgpaPtr = cgpa; // Assign value to CGPA
        }
        
        // Destructor to free allocated memory
        ~Student() {
            cout<< "Hi, I am destructor" << endl;
            delete cgpaPtr; // Free the dynamically allocated memory for CGPA 
        }

        void getInfo() {
            cout << "Name: " << name <<endl;
            cout << "CGPA: " << *cgpaPtr << endl;
        }
};


int main(){
    Student s1("Alice", 3.8);
    s1.getInfo();
    // Destructor will be called automatically when s1 goes out of scope
    // No need to explicitly call the destructor, it will be called automatically
    
    return 0;
}