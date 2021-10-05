/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<int> s;
        while(head){
            s.push(head->val);
            head = head->next;
        }
        vector<int> r;
        while(!s.empty()){
            r.push_back(s.top());
            s.pop();
        }
        // 使用工具类 直接反转
        // vector<int> r;
        // while(head){
        //     r.push_back(head->val);
        //     head = head->next;
        // }
        // reverse(r.begin(), r.end());
        return r;
    }
};