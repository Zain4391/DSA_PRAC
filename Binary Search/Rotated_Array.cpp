#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target) {
    int peak_idx = -1;
    int ret_val = -1;

    if(nums.size() == 1) {
        if(nums[0] == target) {
            ret_val = 0;
            return ret_val;
        } else {
            ret_val = -1;
            return ret_val;
        }
    }

    int l = 0;
    int r = nums.size() - 1;

    while(l < r) {
        int mid = (l + r) / 2;

        if(nums[mid] > nums[r]) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    peak_idx = l - 1;

    // if array not rotated then sorted and we perform normal binary search.
    if(peak_idx == nums.size() - 1) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r) {
            int mid = (l + r) / 2;

            if(nums[mid] == target) {
                ret_val = mid;
                return ret_val;
            }

            if(nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    } else {
        // {0 ... pead_idx}, {peak_idx + 1 .... n -1}
        int l = 0;
        int r = peak_idx;

        while(l <= r) {
            int mid = (l + r) / 2;

            if(nums[mid] == target) {
                ret_val = mid;
                return ret_val;
            }

            if(nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        l = peak_idx + 1;
        r = nums.size() - 1;

        while(l <= r) {
            int mid = (l + r) / 2;

            if(nums[mid] == target) {
                ret_val = mid;
                return ret_val;
            }

            if(nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }

    return ret_val; //indicates target not found
}

int main() {
    vector<int> test_case_one = {4,5,6,7,0,1,2};
    vector<int> test_case_two = {1};
    int targets[2] = {0,0};
    cout<<search(test_case_one,targets[0]) << endl;
    cout<<search(test_case_two,targets[1]) << endl;

    return 0;
}