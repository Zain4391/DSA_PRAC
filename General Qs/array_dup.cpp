#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main() {

    vector<int> v = {1,1,2,3,4,5,5,7,9};
    vector<int> dups;
    unordered_map<int,int> occurences; //first int is the key second is the no of occurences
    for(int i = 0; i < v.size(); i++) {
        occurences[v[i]]++;
    }

    for(auto& pair: occurences) {
        if(pair.second > 1) {
            dups.push_back(pair.first);
        }
    }

    reverse(dups.begin(),dups.end());
    
    for(int i = 0; i < dups.size(); i++) {
        cout << dups[i] << " ";
    }

    return 0;
}