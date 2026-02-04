
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int low,int high){

    int pivot = v[low];
    int i = low;
    int j = high;

    while (i<j)
    {
        
        while (v[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while (v[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j) swap(v[i],v[j]);     
    }
    swap(v[low],v[j]);
    return j;
    
}

void quickSort(vector<int> &v,int low,int high){

    if(low<high){
        
        int partitionIdx = partition(v,low,high);
        quickSort(v,low,partitionIdx-1);
        quickSort(v,partitionIdx+1,high);
    }
}

int main(){
    vector<int> v={22,66,33,62,43,22,67,88,22};
    int low = 0;
    int high = v.size()-1;
    quickSort(v,low,high);
    for (auto numbers:v)
    {
        cout<<numbers<<" ";
    }
    
    return 0;
}