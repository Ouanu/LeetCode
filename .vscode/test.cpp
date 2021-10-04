#include <iostream>
#include<stack>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *s = new ListNode(0, head);
    stack<ListNode *> st;
    ListNode *t = s;
    while (t)
    {
        st.push(t);
        t = t->next;
    }
    for (int i = 0; i < n; i++)
    {
        st.pop();
    }
    ListNode *prev = st.top();
    cout << prev->val << endl;
    prev->next = prev->next->next;
    ListNode* ans = s->next;
    return ans;
}
int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *l1Mid = new ListNode(2);
    ListNode *l1End = new ListNode(3);
    l1->next = l1Mid;
    l1Mid->next = l1End;
    // ListNode *l2 = new ListNode(9);
    // ListNode *l2Mid = new ListNode(9);
    // // ListNode *l2End = new ListNode(4);
    // l2->next = l2Mid;
    // // l2Mid->next = l2End;

    ListNode *result = removeNthFromEnd(l1, 2);
    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}