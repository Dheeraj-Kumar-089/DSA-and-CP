#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int columns,a,b,c;
        cin>>columns>>a>>b>>c;
        int total = 2*columns;
        int total_no_of_monkeys = 0;
        if(a>=columns) total_no_of_monkeys += columns;
        else total_no_of_monkeys += a;
        if(b>=columns) total_no_of_monkeys += columns;
        else total_no_of_monkeys += b;
        if((total)>(total_no_of_monkeys)) total_no_of_monkeys +=c;
        if(total_no_of_monkeys>total) total_no_of_monkeys=total;
        

        cout<<total_no_of_monkeys<<endl;

    }
    
    return 0;
}