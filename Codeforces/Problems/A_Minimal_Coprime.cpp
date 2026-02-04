#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    
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
    if(counter==2) return true;
    else return false;
    
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin >> l >> r;

        if(prime(l)==true && prime(r)==true && l==r){
            cout << 0 << endl;
        }
        else if(l==1 && r==1) cout<<1<<endl;
        else cout<<abs(l-r)<<endl;


    }
    
    return 0;
}