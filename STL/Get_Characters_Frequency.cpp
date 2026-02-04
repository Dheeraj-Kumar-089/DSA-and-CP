#include<bits/stdc++.h>
using namespace std;
int main() { 
 int t;
 cin>>t;
 while (t--)
 {

  set<char> ch;
  int n;
  cin>>n;
  vector<char> v(n);
  for (int i = 0; i < n; i++)
  {
    char c;
    cin>>c;
    v.push_back(c);
    ch.insert(c);
  }
  cout<<ch.size()<<endl;
  map<char,int> m;
  for (int i = 0; i < 26; i++)
  {
    m[(char)(97+i)]=count(v.begin(),v.end(),(char)(97+i));
  }
  for (auto &count:m)
  {
    if (count.second!=0)    
    cout<<count.first<<" "<<count.second<<endl;
  }
 }
 return 0;
}
