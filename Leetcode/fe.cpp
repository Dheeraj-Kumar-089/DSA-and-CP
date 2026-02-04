class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int count = 0; 
        while(nums.size()>0){
            bool flag = true;
            
            map<int,int> mp;
            for(int i=0; i<nums.size(); ++i){
                mp[nums[i]]++;
                if(mp[nums[i]]>1){
                    flag = false;
                    break;  
                }     
            }
        
        if(flag == false) {
                if(nums.size()>2) {
                    nums.erase(nums.begin(),nums.begin()+3);
                    count++;}
                else {
                    nums.clear();
                    count++;
                    return count;
                }
            }
        else break;
        }
        return count;
    }
};

#include<bits/stdc++.h>
using namespace std;
int main(){
    

    return 0;
}   