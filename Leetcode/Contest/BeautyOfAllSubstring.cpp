
#include<bits/stdc++.h>
using namespace std;

    // vector approach

    // int beautySum(string s) {

    //     int result = 0;
    //     for(int i=0;i<s.size();i++){
    //         string st;
    //         st.push_back(s[i]);
    //         for(int j=i+1;j<s.size();j++){
    //             st.push_back(s[j]);

    //             unordered_map<char, int> freq;

    //             for (char ch : st) {
    //                 freq[ch]++;
    //             }

    //             vector<pair<int, char>> res;
    //             for (auto& p : freq) {
    //                 res.push_back({p.second, p.first});
    //             }

    //             sort(res.begin(), res.end());

    //             int max=res[freq.size()-1].first;
    //             int min=res[0].first;

    //             int beauty = max-min;
    //             if(freq.size()!=1) result+=beauty;


    //         }
    //     }
    //     return result;
    // }

    int beautySum(string s) {

        int result = 0;
        for(int i=0;i<s.size();i++){
            unordered_map<char, int> freq;
            freq[s[i]]++;
            for(int j=i+1;j<s.size();j++){

                freq[s[j]]++;

                 int maxFreq = 0, minFreq = INT_MAX;
                    for (auto& p : freq) {
                        maxFreq = max(maxFreq, p.second);
                        minFreq = min(minFreq, p.second);
                    }

                int beauty = maxFreq-minFreq;
                if(freq.size()!=1) result+=beauty;


            }
        }
        return result;
    }



int main(){
    string s="otxixllvlxbdlcgwlfrmeiwmhuohckezaljlwnkbnnymqkscliqulevznzasiwadrvabiavjelaqqkabtmyoafzurywotzeovxknkxsuyfpckotvzlrpmmxermkuxwetsjtacklphlucfitdvfkwxzjfiwhkjpxfmkfwphmymmuqvyjgcrjmxlmduoxwjxdmuhchrrlpnwwkeedafodqtrgcmptfgtqnylvxntapwiledizdyllctbgtrmlawagobggmscettdpbiwveopoawghnixgntiuzfwtmpj";

    
    cout<<beautySum(s);
    

    return 0;
}   