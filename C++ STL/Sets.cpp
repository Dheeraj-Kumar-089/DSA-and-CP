#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    cout << "lower bound = " << *s.lower_bound(4) << endl; // return the no of instances associated to laptop key
    cout << "upper bound = " << *s.upper_bound(4) << endl; // return the value of laptop key

    for (auto val : s)
    {
        cout << val << " ";
    }

    cout << endl;
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
        


    cout << "lower bound = " << *ms.lower_bound(4) << endl; // return the no of instances associated to laptop key
    cout << "upper bound = " << *ms.upper_bound(4) << endl; // return the value of laptop key

    for (auto val : ms)
    {
        cout << val << " ";
    }
    

    return 0;
}