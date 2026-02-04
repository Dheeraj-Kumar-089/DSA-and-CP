#include<bits/stdc++.h>
using namespace std;


int main() { 
  int n;
  int m;
  cin>>n>>m;
  std::set<int> s1;
  std::set<int> s2;
    for (int i = 0; i < n; i++) {
		int x;
		cin>>x;
		s1.insert(x);
		}
    for (int i = 0; i < m; i++) {
	    int x;
		cin>>x;
		if(s1.count(x)) s2.insert(x);
		}

    for (auto &value: s2)
    {
        cout<<value<<" ";
    }
	
  return 0;
}
