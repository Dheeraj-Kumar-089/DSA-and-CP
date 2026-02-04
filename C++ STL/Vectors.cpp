#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back(); // delete the last added element in vector
    vec [2] = 8; // add 8 at index 2 
    // vec.erase(vec.begin()); to erase element at 0th index 

    vec.insert(vec.begin() +2,100); //insert element at given index
    //vec.clear(); // to clear the vector
    vector <int> name = {55,66,687};
     for (int val : name)
    {
        cout << val << " ";
    }  
    cout << endl; 

    vector <int> digit(5,9); //5 vectors with each have value 9
     for (auto it = digit.rbegin(); it!=digit.rend(); it++)  // vector iterator 
    {
        cout << *(it) << " ";
    }  
    cout << endl;

    vector <int> vec2(name); //copy name to vec2
     for (int val : vec2)
    {
        cout << val << " ";
    }  
    cout << endl;
    
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    
    vector<int>::iterator it;
    for (it=digit.begin(); it !=digit.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;

    vector<int>::reverse_iterator itr;
    for (itr=vec.rbegin(); itr!=vec.rend(); itr++)
    {
        cout << *(itr) << " ";
    }
    
    cout << endl;

    cout << "vector at index 2 is : " << vec [2] << " or "<<vec.at(2)<< endl;
    cout << "front element is : " <<  vec.front() << endl; 
    cout << "back element is : " <<  vec.back() << endl; 
    return 0;
    
}