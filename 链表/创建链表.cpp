#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *secondPtr = new ListNode(2);
    ListNode *thirdPtr = new ListNode(3);
    ListNode *fourthPtr = new ListNode(4);
    ListNode *fifthPtr = new ListNode(5);

    head->next = secondPtr;
    secondPtr->next = thirdPtr;
    thirdPtr->next = fourthPtr;
    fourthPtr->next = fifthPtr;
    fifthPtr->next = nullptr;
    anhead->next = ansecondPtr;

    cout << head << endl;
    head = mergeTwoLists(head, anhead);
    cout << "......." << endl;
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;
    cout << head->next->next->next->next->val << endl;
    return 0;
}
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *result;
    if (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            result = l1;
            result->next = mergeTwoLists(l1->next, l2);
        }
        else
        {
            result = l2;
            result->next = mergeTwoLists(l1, l2->next);
        }
    }
    else if (l1 == nullptr)
    {
        return l2;
    }
    else if (l2 == nullptr)
    {
        return l1;
    }

    return result;
}