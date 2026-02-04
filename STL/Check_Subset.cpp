#include<bits/stdc++.h>
using namespace std;


int main() { 
  int n;
  int m;
  cin>>n>>m;
  std::set<int> s1;
    for (int i = 0; i < n; i++) {
		int x;
		cin>>x;
		s1.insert(x);
		}
        int flag=1;
    for (int i = 0; i < m; i++) {
	    int x;
		cin>>x;
		if(s1.count(x)==0) {
            flag=0;
            break;
		}
    }
    if (flag==1) cout<<"YES";
    else cout<<"NO";
    
	
  return 0;

}
