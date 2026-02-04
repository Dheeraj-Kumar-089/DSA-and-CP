#include<bits/stdc++.h>
using namespace std;
    int factor(int result) {
	int ret=0;
	for (int i = 1; i*i <= result; i++) {
		if(result % i == 0) {
			if(i*i==result) ret++;
            else ret+=2;
		}
        
	}
	return ret;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int a,b;
    cin>>a>>b;
    int result= abs(a-b);
    if (a==b) cout<<-1<<endl;
    else cout<<factor(result)<<endl;
    } 
    return 0;
}