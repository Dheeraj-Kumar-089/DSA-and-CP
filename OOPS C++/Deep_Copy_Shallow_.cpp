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

        // Copy constructor for deep copy
        Student(Student &obj) {
            this->name = obj.name; // Deep copy of string
            cgpaPtr = new double;
            *cgpaPtr = *(obj.cgpaPtr); // Deep copy of CGPA
        }

        void getInfo() {
            cout << "Name: " << name <<endl;
            cout << "CGPA: " << *cgpaPtr << endl;
        }
};

int main(){
    
    Student s1("Alice", 3.8);
    Student s2(s1); 
    s1.getInfo();
    s2.name = "Neha"; // Changing name of s2
    *(s2.cgpaPtr) = 4.0; // Modifying CGPA of s2
    s1.getInfo(); // s1's CGPA remains unchanged
    s2.getInfo(); // s2's CGPA is updated

    return 0;
}