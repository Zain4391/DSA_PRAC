#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 4, 6, 7, 4, 5, 5, 5, 7, 7, 6, 6, 6};
    unordered_map<int,int> occurences;
    vector<int> three_ans;

    for(int i = 0; i < v.size(); i++) {
        occurences[v[i]]++;
    }

    for(auto& pair: occurences) {
        if(pair.second == 3) {
            three_ans.push_back(pair.first);
        }
    }

    sort(three_ans.begin(),three_ans.end());

    for(auto& element: three_ans) {
        cout << element << " ";
    }

    return 0;
}