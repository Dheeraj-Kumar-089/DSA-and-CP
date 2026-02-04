#include<bits/stdc++.h>
using namespace std;

long long recursiveBinarySearch(long long left,long long right,long long k, long long &lucky){
    
        long long length = right-left+1;
        if(length<k){
            return lucky;
        }

        long long mid = left + (right-left)/2;
      
        if((length)%2==0){
            
            recursiveBinarySearch(left,mid,k,lucky);
            
            recursiveBinarySearch(mid+1,right,k,lucky);
              lucky += mid;
        }
        else{
        
            recursiveBinarySearch(left,mid-1,k,lucky);
           recursiveBinarySearch(mid+1,right,k,lucky);
            lucky += mid;
        }
        return lucky;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;
         cin>>n>>k;
        

        long long lucky = 0;
        cout<<recursiveBinarySearch(1,n,k,lucky)<<endl;
        
        
      

    }
    
    return 0;
}