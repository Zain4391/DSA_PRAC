#include <bits/stdc++.h>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int satisfied = 0;
    int current_sum = 0;
    int max_sum = 0;
    int l = 0;
    for(int r = 0; r < grumpy.size(); r++) {
        if(grumpy[r] == 1) {
            current_sum += customers[r];
        } else {
            satisfied += customers[r];
        }
        if(r - l + 1 > minutes) {
            if(grumpy[l] == 1) {
                current_sum -= customers[l];
            }
            l++;
        }
        max_sum = max(max_sum,current_sum);
    }

    return satisfied + max_sum;
}

int main() {
    vector<int> cust = {8,8};
    vector<int> grumpy = {1,0};
    cout<<maxSatisfied(cust,grumpy,2);
    return 0;
}