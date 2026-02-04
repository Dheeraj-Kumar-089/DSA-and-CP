#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    multiset<string> reserveBooks(const vector<string>& bookTitles, const vector<int>& reservations) {
       multiset<string> sorted;
       int n=bookTitles.size();
       for (int i = 0; i < n; ++i)
       {
        for (int j= 0; j<reservations[i]; ++j)
        {
            sorted.insert(bookTitles[i]);
        }
        
       }
       return sorted;
       
    }
};

int main(){
    int n;
    cin>>n;
    vector<string> bookTitles(n);
    for (int i = 0; i < n; i++)
    {
        cin>>bookTitles[i];
    }
    vector<int> reservations(n);
    for (int i = 0; i < n; i++)
    {
        cin>>reservations[i];
    }
    Solution result; 
    multiset<string> sorted;
    sorted = result.reserveBooks(bookTitles,reservations);

    for (auto it=sorted.begin(); it!=sorted.end(); ++it)
    {
        cout<<*it<<" ";
    }
    
    
}