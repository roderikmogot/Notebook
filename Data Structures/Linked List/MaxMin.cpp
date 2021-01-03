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

int MaximumValueLL(LinkedList* LList){
    int max_value = 0;
    while(LList!=nullptr){
        if(LList->value >= max_value)max_value = LList->value;
        LList = LList->next;
    }
    return max_value;
}

int MinimumValueLL(LinkedList* LList){
    int max_value = LList->value;
    while(LList!=nullptr){
        if(LList->value <= max_value)max_value = LList->value;
        LList = LList->next;
    }
    return max_value;
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
    
    cout << "Maximum Value: " << MaximumValueLL(head)   ;
    
    cout << "\n";
    
    cout << "Minimum Value: " << MinimumValueLL(head);
    return 0;
}
