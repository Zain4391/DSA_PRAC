#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    nums1.insert(nums1.begin(), nums2.begin(), nums2.end()); // {1, 3, 2}
    sort(nums1.begin(),nums1.end()); // {1, 2, 3}

    int n = (nums1.size() + 1) / 2;
    double median;

    if(nums1.size() % 2 != 0) {
        median = (double)nums1[n - 1];
    } else {
        median = (double)(nums1[n] + nums1[n -1]);
        median /= 2;
    }

    return median;

}

int main() {

    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};

    cout<<findMedianSortedArrays(nums1,nums2);

    return 0;
}