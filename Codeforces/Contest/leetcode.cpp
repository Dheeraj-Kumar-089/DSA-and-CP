#include <bits/stdc++.h>
using namespace std;

  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 1;

        int maxlength=0;
        int currentlength=1;
        unordered_map<char,int> st;
        st[s[0]]=1;
        int i = 1;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                st[s[right]]= ++i;
                currentlength++;
                right++;
            }else{
                st.clear();
                left+=st[right];
                i=0;
                for (int j = left; j <= right; j++)
                {
                    st[s[left]]=++i;
                }
                
                maxlength=max(maxlength,currentlength);
                currentlength = right-left+1;
                right++;
            }

        }

        return maxlength;

    }
};

int main(){

    return 0;
}

