#include<bits/stdc++.h>
using namespace std;
    set<int> factor(int n) {
	set<int> ret;
	for (int i = 1; i <= n; i++) {
		if(n % i == 0) {
			ret.insert(i);
		}
        
	}

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
    cout<<ret.size()<<endl;
    } 
    return 0;
}
