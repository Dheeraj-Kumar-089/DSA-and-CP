#include<bits/stdc++.h> 
using namespace std;// For upper_bound

// Helper function to find the next valid index for a character
// in the string S, maintaining the order.
// Uses binary search (upper_bound) for efficiency.
int findIndexOfCharacter(char character, 
                         const map<char, vector<int>>& indexmapcopy, 
                         int indexofprevious_letter) {
    if (indexmapcopy.count(character) == 0) {
        return -1; // Character not found in S at all
    }

    const vector<int>& indices = indexmapcopy.at(character);

    // Use upperbound to find the first index greater than indexofpreviousletter
    auto it = upper_bound(indices.begin(), indices.end(), indexofprevious_letter);

    if (it != indices.end()) {
        return *it; // Return the found index
    } else {
        return -1; // No valid index found after the previous one
    }
}

// Helper function to check if a word is a subsequence of S
bool computeIfValid(const string& word, 
                    const map<char, vector<int>>& originalindexmap) {

    int prevcharindex = -1; 

    for (char character : word) {
        int currentcharsindex = findIndexOfCharacter(character, originalindexmap, prevcharindex);

        if (currentcharsindex == -1) {
            return false; // Character not found in order
        }
        prevcharindex = currentcharsindex; // Update for the next character
    }
    return true; // All characters found in order
}


int findNumberOfSubsequence(const string& s, const vector<string>& words) {
   
    map<char, vector<int>> index_map;
    for (int i = 0; i < s.length(); ++i) {
        index_map[s[i]].push_back(i);
    }

    int counterofwords = 0;

    for (const string& word : words) {
        if (computeIfValid(word, index_map)) {
            counterofwords++;
        }
    }

    return counterofwords;
}

// Example usage
int main() {
    string s1 = "abcde";
    vector<string> words1 = {"a", "bb", "acd", "ace"};
    cout << "Test 1: " << findNumberOfSubsequence(s1, words1) << endl; // Expected: 3

    string s2 = "abac";
    vector<string> words2 = {"aa", "ab", "ac", "ba", "ca"};
    cout << "Test 2: " << findNumberOfSubsequence(s2, words2) << endl; // Expected: 4 (aa, ab, ac, ca)

    string s3 = "rabbbit";
    vector<string> words3 = {"rabbit", "rabit", "rbb","rabbit"};
    cout << "Test 3: " << findNumberOfSubsequence(s3, words3) << endl; // Expected: 3

   return 0;
}
