#include<bits/stdc++.h>
using namespace std;



int partition(vector<int>& arr,int st,int end){ //O(n)
    int pivot=arr[end]; //last element as pivot
    int idx=st-1; //index of smaller element
    for(int j=st;j<end;j++){ //iterate from start to end-1
        if(arr[j]<=pivot){   //if current element is smaller than pivot
            idx++;           //increment index of smaller element
            swap(arr[j],arr[idx]);   //swap current element with element at index of smaller element
        }
    
    }
    idx++;  //increment index of smaller element
    swap(arr[end],arr[idx]);  //swap pivot with element at index of smaller element
    return idx;  //return index of pivot
}

void quicksort(vector<int>& arr,int st,int end){ //O(nlogn) avg case, O(n^2) worst case
    if(st<end){ 
        int pivIdx=partition(arr,st,end);
        quicksort(arr,st,pivIdx-1); //sort left
        quicksort(arr,pivIdx+1,end); //sort right
    }
   
}


int main(){
    vector<int> arr={1,4,2,6,5,3};
    quicksort(arr,0,arr.size()-1); 

    for(auto x:arr){ 
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}