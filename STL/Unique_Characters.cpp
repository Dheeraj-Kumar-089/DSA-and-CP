#include<bits/stdc++.h>
using namespace std;


int main() { 
  int n;
  cin>>n;
  set<char> ch;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin>>c;
    ch.insert(c);
  }

  cout<<ch.size();

  

  return 0;

}
