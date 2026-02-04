#include<bits/stdc++.h>
using namespace std;
set<int> factor(int n) {
	set<int> ret;
	for (int i = 2; i*i <= n; ++i) {
		while (n % i == 0) {
			ret.insert(i);
		}
        
	}
    if(n>2){ret.insert(n);}
	return ret;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    set<int> ret=factor(n);
    if (ret.size()==1)
    {
        cout<<"1"<<endl; 
    }
    else if (n<=2)
    {
        cout<<"1"<<endl;
    }
    else cout<<ret.size()<<endl;
    } 
    return 0;
}
