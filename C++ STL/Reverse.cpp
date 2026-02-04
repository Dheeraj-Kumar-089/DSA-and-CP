#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> vec = {3,5,6,7,1};

    reverse(vec.begin(),vec.end()); // reverse all vector

    for (auto val : vec)
    {
        cout << val <<  " ";
    }

    cout << endl;

    reverse(vec.begin()+1,vec.begin()+3); // reverse 1 to 3 index

    for (auto val : vec)
    {   
        cout << val <<  " ";
    }

    cout << endl;



    return 0;
}