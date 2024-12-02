#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {3, -1, 4, 3, -1, 2, -2, 5, 2, 6, -2, -1, 3};
    vector<int> ans;
    unordered_map<int,int> occurences;

    for(auto& num: v) {
        occurences[num]++;
    }

    for(auto& pair: occurences) {
        if(pair.second == 2) {
            ans.push_back(pair.first);
        }
    }

    sort(ans.begin(),ans.end(),greater<int>());

    for(auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}