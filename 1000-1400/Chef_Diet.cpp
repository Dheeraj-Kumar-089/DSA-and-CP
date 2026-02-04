#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n>>k;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
        bool flag = true;
	        int check=0;
	        int val=0;
	    for(int i=0;i<n;++i){
	        
	        check = v[i] + val;
	        if(check>=k){
	            val = v[i] - k + val;
	        }
	        else{
	            cout<<"NO"<<" "<<i+1<<endl;
                flag = false;
	            break;
	        }
	    }
	    if(flag == true) cout<<"YES"<<endl;
	}

}
