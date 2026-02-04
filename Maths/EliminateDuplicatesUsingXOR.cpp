#include<bits/stdc++.h>
using namespace std;
int main(){
/* Given array  aof n integers . All integers are present 
in even count except one.
Find that one integer which has odd count in 
O(N) time complexity and O(1) space;
N < 10^5
a[i] < 10^5
*/

    int n;
    cin>>n;
    int x;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans ^= x;

    }
    cout<<ans<<endl;
    return 0;
}