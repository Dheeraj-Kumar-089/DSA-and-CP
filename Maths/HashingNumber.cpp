#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    //percompute 
    int hash[20]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }


    int q;
    cin >> q;
    while (q--) //fetch 
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    
    return 0;
}