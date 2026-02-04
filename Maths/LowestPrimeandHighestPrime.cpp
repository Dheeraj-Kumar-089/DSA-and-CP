#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);


int main(){
    //int N = 9;
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i < N; ++i) //O(nloglogn)
    {
        if(isPrime[i]==true){ //if i is prime
         lp[i]=hp[i]=i; //initialize lowest prime and highest prime with i
            for(int j=2*i; j < N ;j+=i){
                isPrime[j]=false;
                hp[j]=i; //update highest prime of j with i
                if(lp[j]==0)
                lp[j]=i; //update lowest prime of j with i if it is not already updated
            }
        }
    }
    
int num;
cin>>num;
vector<int> prime_factors;
while (num>1)
{
    int prime_factor = lp[num];
    while(num%prime_factor==0)
    {
        num/=prime_factor;
        prime_factors.push_back(prime_factor);        
    }
}
for(auto i:prime_factors){
    cout<<i<<" ";
}
    return 0;
}