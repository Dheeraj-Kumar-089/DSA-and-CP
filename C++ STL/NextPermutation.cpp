#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    string s = "abcd";
    next_permutation(s.begin(),s.end());
    cout << s << endl;

    string s1 = "bca";
    prev_permutation(s1.begin(),s1.end());
    cout << s1 << endl;

    cout << max(4,5) << " " << min(6,10) << endl; //to find max and min element

    int a = 5, b = 10;
    swap(a,b);
    cout << "a = " << a << endl;




    return 0;
}