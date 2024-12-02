#include <bits/stdc++.h>
using namespace std;

void resverseArray (vector<int> &nums, int start, int end) {

    while(start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    k = k % n; //check if k out of bound (> n)

    //reverse the whole array
    resverseArray(nums, 0, n-1); //{7,6,5,4,3,2,1}

    resverseArray(nums, 0, k-1);

    resverseArray(nums, k, n-1);

    for(int i = 0; i < n ; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;    
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums,3);
    return 0;
}