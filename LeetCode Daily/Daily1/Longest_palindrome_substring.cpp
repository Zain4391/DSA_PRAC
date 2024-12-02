#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
        int len = 0;
        int longest = 0;
        string substr = "";

        for(int i = 0; i < s.length(); i++) {
            int l = i;
            int r = i;
            
            // odd palindrome
            while((l >= 0 && r < s.length()) && (s[l] == s[r])) {
                len = (r - l + 1);
                if(len > longest) {
                    longest = len;
                    substr = s.substr(l,len);
                }
                l--;
                r++;
            }

            //even palindrome
            l = i;
            r = i + 1;
            while((l >= 0 && r < s.length()) && (s[l] == s[r])) {
                len = (r - l + 1);
                if(len > longest) {
                    longest = len;
                    substr = s.substr(l,len);
                }
                l--;
                r++;
            }
        }

        return substr;
}



int main() {

    cout<<longestPalindrome("babad");
    return 0;
}