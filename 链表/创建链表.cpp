#include <iostream>
using namespace std;

struct ListNode
{
    double value;
    ListNode *Next;
    ListNode(double x) : value(x), Next(NULL) {}    //构造函数
};

void deleteNode(ListNode* node);

int main()
{
    // ListNode *head = nullptr;
    ListNode* head = new ListNode(12.5);
    //Create first node with 12.5
    // head = new ListNode(12.5);  //Allocate new node
    // head->value = 12.5;   // store the value
    // head->Next = nullptr; // Signify end of list
    //Create second node with 13.5
    ListNode *secondPtr = new ListNode(13.5);
    // secondPtr->value = 13.5;
    // secondPtr->Next = nullptr;  // Second node is end of list
    head->Next = secondPtr;     // First node points to second
    //Create third node with 14.5
    ListNode *thirdPtr = new ListNode(14.5);
    // thirdPtr->value = 14.5;
    // thirdPtr->Next = nullptr;  // Second node is end of list
    head->Next->Next = thirdPtr;     // First node points to second
    // Print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->Next->value << endl;
    cout << "Third item is " << head->Next->Next->value << endl;
    deleteNode(secondPtr);
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->Next->value << endl;
    cout << "Third item is " << head->Next->Next->value << endl;
    return 0;
}
void deleteNode(ListNode* node){
    node->value = node->Next->value;
    node->Next = node->Next->Next;
}