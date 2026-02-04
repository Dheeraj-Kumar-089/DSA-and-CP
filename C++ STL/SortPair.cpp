#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<pair<int, int>> vec = {{3,5},{2,7},{4,8},{1,5}};

    sort(vec.begin(),vec.end()); // sort according to first element of pair

    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;



    return 0;
}