#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    
    while (left<=mid && right<=high)
    {
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }

        while(left<=mid){
            temp.push_back(v[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(v[right]);
            right++;
        }

        for(int i = low; i<= high; i++){
            v[i]=temp[i-low];
        }
        
    }
    
void mergeSort(vector<int> &v,int low,int high){

    if(low >= high) return;
    int mid = low + (high - low)/2;
    
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    merge(v,low,mid,high);

}




int main(){
    vector<int> v={22,66,33,62,43,22,67,88,22};
    int low = 0;
    int high = v.size()-1;
    mergeSort(v,low,high);
    for (auto numbers:v)
    {
        cout<<numbers<<" ";
    }
    


    return 0;
}