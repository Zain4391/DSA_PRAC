#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int last = m + n - 1; 

    // Pointers for nums1 and nums2
    m--; 
    n--; 

    while (m >= 0 && n >= 0) {
        if (nums1[m] > nums2[n]) {
            nums1[last--] = nums1[m--];
        } else {
            nums1[last--] = nums2[n--];
        }
    }

    while (n >= 0) {
        nums1[last--] = nums2[n--];
    }
}

int main() {
    vector<int> n1 = {1};
    vector<int> n2 = {};

    merge(n1,3,n2,0);
}