#include <iostream>
#include <math.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *root = new ListNode(0);
    ListNode *head = root;
    ListNode *tail = nullptr;
    while (l1 || l2)
    {
        cout << "SUCCEED" << endl;
        int l1Val = l1 ? l1->val : 0;
        int l2Val = l2 ? l2->val : 0;
        root->val += l1Val + l2Val;
        cout << "ROOT:" << root->val << endl;
        ListNode *nextP = new ListNode(0);
        if (root->val >= 10)
        {
            nextP->val += 1;
            // cout << nextP->val << endl;
            root->val = root->val % 10;
        }
        cout << root->val << endl;
        root->next = nextP;
        cout << nextP->val << endl;
        tail = root;
        root = root->next;
        if (l1)
        {
            l1 = l1->next;
        }
        if (l2)
        {
            l2 = l2->next;
        }
    }

    cout << tail->val << endl;
    if(root->val == 0){
        tail->next = nullptr;
    }

    cout << head->val << endl;
    return head;
}
int main()
{
    ListNode *l1 = new ListNode(9);
    ListNode *l1Mid = new ListNode(9);
    ListNode *l1End = new ListNode(9);
    l1->next = l1Mid;
    l1Mid->next = l1End;
    ListNode *l2 = new ListNode(9);
    ListNode *l2Mid = new ListNode(9);
    // ListNode *l2End = new ListNode(4);
    l2->next = l2Mid;
    // l2Mid->next = l2End;

    ListNode *result = addTwoNumbers(l1, l2);
    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}