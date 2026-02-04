#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);

    for (int i = 0; i < n; i++)
    {
        int number_workers;
        cin>>number_workers;
        int mask=0;
        for (int j = 0; j < number_workers; j++)
        {
            int days;
            cin>>days;      
            mask = (mask|(1<<days));
        }
        masks[i]=mask;
    }
    int max_days = -1;
    int person1 = -1;
    int person2 = -1;
    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j < n ;j++)
        {
            int intersection = (masks[i]&masks[j]);
            int common_days = __builtin_popcount(intersection);
            if(common_days>max_days) {
                max_days = common_days;
                person1 = i;
                person2 = j;

            }
        }
        
    }
    //TC=O(n^2);

    cout<<person1<<" "<<person2<<" "<<max_days;
    
    return 0;
}