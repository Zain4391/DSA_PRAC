#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &nums, int target, bool bias) {
    int l = 0;
    int r = nums.size() - 1;
    int i = -1;

    while( l <= r) {
        int m = (l + r) / 2;

        if(nums[m] > target ) {
            r = m - 1;
        } else if(nums[m] < target ){
            l = m + 1;
        } else {
            i = m; //value found
            if(bias) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
    }

    return i;
}


vector<int> searchRange(vector<int>& nums, int target) {

    int left = BinarySearch(nums,target,true);
    int right = BinarySearch(nums, target, false);

    return {left, right};

}
int main() {

    vector<int> nums = {5,7,7,8,8,10};
    vector<int> ans = searchRange(nums,7);

    for(int i : ans) {
        cout<< i <<endl;
    }

    return 0;
}