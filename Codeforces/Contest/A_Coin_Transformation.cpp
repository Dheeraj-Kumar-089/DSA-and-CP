#include<bits/stdc++.h>
using namespace std;

// void coinTransformation(long long int n){
    
//     long long int idx = n;
//     long long int count = 0;
//     if (n <= 3 && n>=0)
//     {
//         count++;
//         return count;
        
//     }

//     coinTransformation(idx/4);
//     idx = n;
//     coinTransformation(idx/4);
//     return count;
// }


long long int helper(long long int n){
    if (n <= 3 && n>=0)
    {
        return 1;
    }
    return helper(n/4) + helper(n/4);
}
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        
        long long int n;
        cin>>n;
        long long int result = helper(n);
        cout<<result<<endl;
    }
    return 0;
}   