#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,x2;
	    cin>>x1>>x2;
	    vector<int> palindrome(x1+x2);
	    int half = x1/2;
	    for(int i = 0; i<half;i++){
	        palindrome[i]=1;
	    }
	    for(int i = half; i<x2+half;i++){
	        palindrome[i]=2;
	    }
	    
	    for(int i = x2+half; i<x2+x1;i++){
	        palindrome[i]=1;
	    }
        int result = 0;
	    for (auto d : palindrome){
            result = result * 10 + d;
        }
	    cout<<result<<endl;
	    
	    
	}
}
