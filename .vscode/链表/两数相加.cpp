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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root = new ListNode(0);
        ListNode *head = root;
        ListNode *tail = nullptr;
        while (l1 || l2)
        {
            int l1Val = l1 ? l1->val : 0;
            int l2Val = l2 ? l2->val : 0;
            root->val += l1Val + l2Val;
            ListNode *nextP = new ListNode(0);
            if (root->val >= 10)
            {
                nextP->val += 1;
                // cout << nextP->val << endl;
                root->val = root->val % 10;
                
            }
            root->next = nextP;
            tail = root;
            root = root->next;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if(root->val == 0){
            tail->next = nullptr;
        } 
        return head;
    }
    
};