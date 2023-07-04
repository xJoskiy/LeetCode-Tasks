#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        if (!head || !head->next || k == 0) return head;

        while (temp)
            size++, temp = temp->next;

        k %= size;
        while (k--)
        {
            ListNode* temp = head->next;
            int tempVal = head->val;
            while (temp)
            {
                std::swap(temp->val, tempVal);
                if (temp->next) temp = temp->next;
                else temp = nullptr;
            }
            head->val = tempVal;
        };

        return head;
    }
};