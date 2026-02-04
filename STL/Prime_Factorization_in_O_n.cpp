#include<bits/stdc++.h>
using namespace std;
vector<int> factor(int n) {
	vector<int> ret;
	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	return ret;
}
int main(){
    int n;
    cin>>n;
    vector<int> ret = factor(n);
    
    for (int i = 0; i < ret.size(); i++)
    {
        cout<<ret[i]<<endl;
    }
    

    return 0;
}
