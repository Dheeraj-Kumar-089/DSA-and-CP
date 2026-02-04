#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int sum=0;
vector<int> divisors[N];


int main(){

    for (int i = 2; i < N; ++i) //O(nloglogn)
    {

            for(int j=i; j < N ;j+=i){
                divisors[j].push_back(i);
                sum+=i;
              
            }
        }
    


for(int i=1;i<20;++i){
    for(int div: divisors[i]){
        cout<<div<<" ";
        
    }
    cout<<endl;
}
    return 0;
}