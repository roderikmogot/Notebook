#include <iostream>
using namespace std;

struct LinkedList{
    int value;
    LinkedList* next;
};

void Insert(LinkedList** new_head, int new_value){

    /* Initiation
     * Assign the new value
     * Assign the next node as head
     * Point the node
     */
    
    //Auto can be changed to LinkedList*, (recommended to switch to auto)
    auto Node = new LinkedList();

    Node->value = new_value;

    Node->next = *new_head;

    *new_head = Node;
}

void PrintLinkedList(LinkedList* LList){
    if(LList!=nullptr){
        PrintLinkedList(LList->next);
        cout << LList->value << " ";
    }
}

int SumLinkedList(LinkedList* LList){
    int sum = 0;
    while(LList!=nullptr){
        sum += LList->value;
        LList = LList->next;
    }
    return sum;
}

int main() {
    LinkedList* head = nullptr;
    
    Insert(&head, 4);
    Insert(&head, 5);
    Insert(&head, 6);
    Insert(&head, 7);
    
    cout << "Linked List: ";
    PrintLinkedList(head);
    
    cout << "\n";
    
    cout << "Sum of all data LL: " << SumLinkedList(head);
    return 0;
}
