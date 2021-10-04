#include <iostream>
#include <stack>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *head = new ListNode(0);
    ListNode *prev = head;
    while (l1 != nullptr && l2 != nullptr)
    {
        if (l1->val < l2->val)
        {
            prev->next = l1;
            l1 = l1->next;
        }
        else
        {
            prev->next = l2;
            l2 = l2->next;
        }
        prev = prev->next;
    }
    prev->next = l1 == nullptr ? l2 : l1;
    return head->next;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *l1Mid = new ListNode(2);
    ListNode *l1End = new ListNode(4);
    l1->next = l1Mid;
    l1Mid->next = l1End;
    ListNode *l2 = new ListNode(1);
    ListNode *l2Mid = new ListNode(3);
    ListNode *l2End = new ListNode(4);
    l2->next = l2Mid;
    l2Mid->next = l2End;

    ListNode *result = mergeTwoLists(l1, l2);
    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}