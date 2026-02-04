#include<bits/stdc++.h>
using namespace std;

    bool check(vector<int>& nums) {
        int rotated = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1] >= nums[i]){
                continue;
            }
            else{
                rotated = i+1;
                break;
            }
        }
       
        int flag = 1;
        for(int j = 0;j<nums.size()-1;j++){
            if(nums[(j+rotated+1)%(nums.size())]>=nums[(j+rotated)%nums.size()]){
                //cout<<nums[(j+rotated+1)%(nums.size())]<<">"<<endl;
                continue;
            }
            else {
                flag = 0;
                cout<<flag<<endl;
                break;
            }
        }
        cout<<flag<<endl;
        if(flag==1) return true;
        else return false;
    }

int main(){
    vector<int> nums={2,1,3,4};
    cout<<check(nums);

    return 0;
}