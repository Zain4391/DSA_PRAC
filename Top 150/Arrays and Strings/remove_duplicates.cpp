#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == val) {
            nums[i] = -1;
        }
    }

    int count = 0;

    int l = 0;
    for(int r = 0; r < nums.size(); r ++) {
        if(nums[r] != val && nums[r] != -1) {
            count++;
        }
        if(nums[r] != -1) {
            swap(nums[r],nums[l]);
            l++;
        }
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return count;        
}

int main() {
    vector<int> n = {3,2,2,3};
    cout<<removeElement(n,3);

    return 0;
}