#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, int> m;

    m.emplace("tv",105);
    m.emplace("tv",105);
    m.emplace("tv",105);
    m.emplace("tv",105);
    m.emplace("tv",105);

 //   m.erase("tv"); //erase all element related to tv
    m.erase(m.find("tv"));
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