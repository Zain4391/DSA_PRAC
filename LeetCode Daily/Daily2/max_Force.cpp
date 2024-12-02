#include <bits/stdc++.h>
using namespace std;

bool canPlaceBalls(vector<int> &position,int m, int force) {
    int count = 1; //place ball at first index
    int prev = position[0];

    for(int i = 0; i < position.size(); i++) {
        if(position[i] - prev >= force) {
            count ++;
            prev = position[i];
        }

        if(count == m) {
            return true;
        }
    }

    return false;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());
    int l = 1;
    int r = position.back() - position.front(); //get the max - 1 element
    int res = 0;

    while(l <= r) {
        int mid = (l + r) / 2;

        if(canPlaceBalls(position,m,mid)) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return res;    
}

int main() {
    vector<int> pos = {1,2,3,4,7};
    cout << maxDistance(pos,3) << endl;
    return 0;
}