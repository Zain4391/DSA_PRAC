#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *current = result;

        int sum = 0, carry = 0;
        while(l1 != nullptr || l2 != nullptr) {
            int value = carry;

            if(l1 != nullptr) {
                value += l1->val;
                l1 = l1->next;
            }
            
            if(l2 != nullptr) {
                value += l2->val;
                l2 = l2->next;
            }

            carry = value / 10;
            current->next = new ListNode(value % 10);
            current = current->next;
        }

        return result->next;
    }

    void Print_list(ListNode *li) {
        ListNode *curr = li;
        while(curr != nullptr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {

    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    
    Solution sol;
    ListNode* ans = sol.addTwoNumbers(l1, l2);

    sol.Print_list(ans);
    return 0;
}