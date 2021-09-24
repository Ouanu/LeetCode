#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    ListNode *Next;
    ListNode(int x) : value(x), Next(NULL) {} //构造函数
};

void deleteNode(ListNode *node);
ListNode *removeNthFromEnd(ListNode *head, int n);
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* secondPtr = new ListNode(2);
    ListNode* thirdPtr = new ListNode(3);
    ListNode* fourthPtr = new ListNode(4);
    ListNode* fifthPtr = new ListNode(5);
    head->Next = secondPtr;
    secondPtr->Next = thirdPtr;
    thirdPtr->Next = fourthPtr;
    fourthPtr->Next = fifthPtr;
    fifthPtr->Next = nullptr;
    head = removeNthFromEnd(head, 2);
    cout << "......." << endl;
    cout << head->value << endl;
    cout << head->Next->value << endl;
    cout << head->Next->Next->value << endl;
    cout << head->Next->Next->Next->value << endl;
    return 0;
}
void deleteNode(ListNode *node)
{
    node->value = node->Next->value;
    node->Next = node->Next->Next;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int length = 0;
    ListNode* node = head;
    while (node != nullptr)
    {
        length++;
        node = node->Next;
    }
    if(length == n){
        return node->Next;
    }
    node = head;
    for (int i = 0; i < length - n - 1; i++)
    {
        node = node->Next;
    }
    node->Next = node->Next->Next;
    
    return head;
}