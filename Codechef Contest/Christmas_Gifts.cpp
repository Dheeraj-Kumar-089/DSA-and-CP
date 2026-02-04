#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
    {
        int h,l,w;
        cin>>h>>l>>w;
        int top = l*w;
        int length = l*h;
        int width = w*h;
        int res = 2*(top+length+width);
        int ans = 1000/res;
        cout<<ans<<endl;
    }
    
return 0;
}