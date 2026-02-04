#include<bits/stdc++.h>
using namespace std;

// Function to XOR two binary strings
string xorBinaryStrings(string a, string b) {
    // Make the strings the same length by padding with leading zeros
    int len_a = a.size();
    int len_b = b.size();
    if (len_a < len_b) {
        a = string(len_b - len_a, '0') + a; // Pad a with leading zeros
    } else if (len_b < len_a) {
        b = string(len_a - len_b, '0') + b; // Pad b with leading zeros
    }

    // Perform XOR and build the result string
    string result = "";
    for (size_t i = 0; i < a.size(); i++) {
        result += (a[i] == b[i]) ? '0' : '1'; // XOR logic
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string t;
        int ans = (stoi(s));
        int maximum = 0;
        int k,l;
        for (int i = 0; i < s.length()-1; i++)
        {
            for (int j = i; j < s.length(); j++)
            {
                
                t += s[j];
                if(j!=i){
                string result = xorBinaryStrings(s, t);
                int num = stoi(result);
                if(num>maximum) {
                    k=i;
                    l=j;
                    maximum=num;
                }}

            }

            
            
        }
        
        cout<<k+1<<" "<<l+1<<" "<<1<<" "<<s.length()<<endl;
        
    }
    
    return 0;

  
}