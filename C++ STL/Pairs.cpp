#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<string,int> m = {"Dheeraj", 100};

    // for(auto &p : m){
    //     cout << p.first <<" " << endl;
    // }
    cout << m.first << endl;
    cout << m.second << endl;


    vector<pair<int,int>> vec = {{1,2}, {2,3}, {3,4}};

    vec.push_back({4,5}); //insert
    vec.emplace_back(4,5); // in-place objects create

    for(auto q : vec){
        cout << q.first << " " << q.second << endl;
    }

    return 0;
}