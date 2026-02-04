#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int counter = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if(n%i==0){
            counter++;
            if((n/i) != i)
            {
                counter++;
            }
        }
    }
    if(counter==2) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}



//T.C = O(sqrt(n))