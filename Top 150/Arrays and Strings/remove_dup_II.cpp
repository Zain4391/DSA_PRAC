#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> occur;


    int j = 0;
    for(int i = 0; i < n; i++) {
        if(occur.find(nums[i]) == occur.end()) {
            nums[j++] = nums[i];
            occur[nums[i]]++;
            continue;
        }
        occur[nums[i]]++;
        int count = occur[nums[i]];
        if(count == 2) {
            nums[j++] = nums[i];
        }
    }

    for(int i = 0; i < j; i++) {
        cout << nums[i] << " ";
    }
    cout<<endl;

    return j;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    cout<< removeDuplicates(nums)<<endl;
    return 0;
}