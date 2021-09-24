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
    ListNode *removeNthFromEnd(ListNode *head, int n){
        int length = 0;
        ListNode* node = head;
        while (node != nullptr)
        {
            length++;
            node = node->next;
        }
        if(length == n){
            return head->next;
        }
        node = head;
        for (int i = 0; i < length - n - 1; i++)
        {
            node = node->next;
        }
        node->next = node->next->next;
        
        return head;
    }
};