#include<bits/stdc++.h>
using namespace std;

int Ballon_occur(string random) {
    unordered_map<char,int> hashmap; // char is the key, value is the number of occurences

    for(char c : random) {
        hashmap[c]++;
    }

    int number = min({hashmap['b'],hashmap['a'],hashmap['l'] / 2, hashmap['o'] / 2,hashmap['n']});

    return number;
}

int apple_occur(string random) {
    unordered_map<char,int> hashmap; // char is the key, value is the number of occ

    for(char c : random) {
        hashmap[c]++;
    }

    return min({ hashmap['a'], hashmap['p'] / 2, hashmap['l'], hashmap['e'] });
}

int main() {
    string random = "nlaaenllbbklonooo"; // how many instances of the word Ballon can be formed from this string?
    unordered_map<char,int> hashmap; // char is the key, value is the number of occurences

    for(char c : random) {
        hashmap[c]++;
    }

    cout << "Number of occurences of word Balloon: " << Ballon_occur(random) << endl;
    cout << "Number of occurences of word Apple: " << apple_occur("applpeappplaepe") << endl;

    return 0;
}