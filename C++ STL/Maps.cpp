#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> m;

    m["tv"] = 199;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25}); //to insert new map
    m.emplace("CPU", 105);
    m.erase("CPU"); // to erase tv key

    cout << "count = " << m.count("laptop") << endl; // return the no of instances associated to laptop key
    cout << "laptop value = " << m["laptop"] << endl; // return the value of laptop key

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("camera") != m.end()) {  // to find given key, if found then it return 
        cout << "found\n";             // it return its iterator otherwise return iterator of last 
    }else {                            // value + 1th
        cout << "not found\n";
    }
    

    return 0;
}