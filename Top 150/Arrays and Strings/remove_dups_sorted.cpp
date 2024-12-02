#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();
    int k,j = 0;

    unordered_map<int,int> occur; // key, no of occurences

    for(int i = 0; i < n; i ++) {
        if(occur.find(nums[i]) == occur.end()) {
            nums[j] = nums[i];
            j++;
            k++;
            occur[nums[i]]++;
        }
    }

    for(int i = 0; i < j; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;    
    return j;        
}

int main() {

    vector<int> nums = {-1,0,0,0,0,0,3};
    cout<< removeDuplicates(nums)<< endl;

    return 0;
}