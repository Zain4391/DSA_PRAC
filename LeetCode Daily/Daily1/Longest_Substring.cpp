#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int len = 0;
    int longest = 0;
    int L = 0; //left part of the window
    unordered_map<char,int> charSet;

    for(int R = 0; R < s.length(); R ++) {
        char c = s[R];

        //Invalid condition, move L
        if((charSet.find(c) != charSet.end()) && (charSet[c] >= L)) {
            L = charSet[c] + 1; 
        }

        charSet[c] = R;

        len = (R - L) + 1;
        longest = max(longest,len);
    }

    return longest;
}

int main() {

    cout<<lengthOfLongestSubstring("pwwkew");
    
    return 0;
}