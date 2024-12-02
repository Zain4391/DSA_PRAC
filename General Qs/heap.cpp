#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int,vector<int>,greater<int>> pq; // min heap
    vector<int> nums = {2,10,4,55,7};

    for(int num : nums) {
        pq.push(num);
    }

    while(!pq.empty()) {
        int n = pq.top();
        pq.pop();
        cout<< n << " ";
    }

    cout<<endl;

    priority_queue<int,vector<int>> maxHeap; // max heap

    for(int num : nums) {
        maxHeap.push(num);
    }

    while(!maxHeap.empty()) {
        int n = maxHeap.top();
        maxHeap.pop();
        cout<< n << " ";
    }
    return 0;
}