#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {3,5,2,7,8};

   sort(arr,arr + 5); //to sort the array

    for (auto val : arr)
    {
        cout << val << " ";
    }

    cout << endl;

    vector<int> vec = {3,5,2,7,8};

    sort(vec.begin() + 1,vec.begin() + 3); // to sort in descending order

    for (auto val : vec)
    {
        cout << val << " ";
    }

    cout << endl;



    return 0;
}