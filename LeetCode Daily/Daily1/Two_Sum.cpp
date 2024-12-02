#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> num_dict; // stored idx, curr idx
    vector<int> indices;

    for (int  i = 0; i < nums.size(); i ++) {
        int complement = target - nums[i];
        if(num_dict.find(complement) != num_dict.end()) {
            indices.push_back(num_dict[complement]);
            indices.push_back(i);
        }
        num_dict[nums[i]] = i;
    }

    return indices;
}
int main() {
    vector<int> nums = {3,3};
    vector<int> ans = twoSum(nums,6);

    for(int i : ans) {
        cout << i << endl;
    }

    return 0;
}