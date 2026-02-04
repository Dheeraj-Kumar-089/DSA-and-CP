#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    vector<int> dragon(3);
    vector<int> sloth(3);
    for (int i = 0; i < 3; i++)
    {
        cin>>dragon[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin>>sloth[i];
    }

    int total_score_dragon = accumulate(dragon.begin(),dragon.end(),0);
    int total_score_sloth = accumulate(sloth.begin(),sloth.end(),0);
    if (total_score_dragon>total_score_sloth) cout<<"DRAGON"<<endl;
    if (total_score_dragon<total_score_sloth) cout<<"SLOTH"<<endl;
    if (total_score_dragon==total_score_sloth) {
        if (dragon[0]>sloth[0]) cout<<"DRAGON"<<endl;
        if (dragon[0]<sloth[0]) cout<<"SLOTH"<<endl;
        if (dragon[0]==sloth[0]) {
            if (dragon[1]>sloth[1]) cout<<"DRAGON";
            if (dragon[1]<sloth[1]) cout<<"SLOTH"<<endl;
            if (dragon[1]==sloth[1]) {
                if (dragon[2]>sloth[2]) cout<<"DRAGON"<<endl;
                if (dragon[2]<sloth[2]) cout<<"SLOTH"<<endl;
                if (dragon[2]==sloth[2]) cout<<"TIE"<<endl;
            }
        }        
        
    }
    }
    
    return 0;
}