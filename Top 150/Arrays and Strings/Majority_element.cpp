#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {

    int n = nums.size();
    int ret_val = -1;
    unordered_map<int,int> occur;

    for(int i = 0; i < n; i++) {
        occur[nums[i]]++;
    }

    for(int i = 0; i < n; i++) {
        int count = occur[nums[i]];
        if(count > (n / 2)) {
            ret_val = nums[i];
        }
    }
        
    return ret_val;
}

int main() {
    vector<int> nums = {3,2,3};
    cout<<majorityElement(nums);
    return 0;
}