#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;

    m["tv"] = 199;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;


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