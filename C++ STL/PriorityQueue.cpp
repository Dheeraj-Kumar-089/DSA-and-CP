#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(10);
    q.push(8);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    

    cout << endl;

priority_queue<int,vector<int>,greater<int>> r; //for decreasing order print

    r.push(1);
    r.push(2);
    r.push(3);
    r.push(10);
    r.push(8);
    while (!r.empty())
    {
        cout << r.top() << " "; 
        r.pop();
    }
    

    cout << endl;

    return 0;
}