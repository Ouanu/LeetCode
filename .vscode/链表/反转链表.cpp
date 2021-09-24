/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = head;
        ListNode *newList = nullptr;
        while(pre){
            ListNode *node = pre->next;
            pre->next = newList;
            newList = pre;
            pre = node;
        }
        return newList;

    }
};