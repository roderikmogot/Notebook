#include <iostream>
using namespace std;

struct DoubleLinkedList{
    int value;
    DoubleLinkedList* prev;
    DoubleLinkedList* next;
};

DoubleLinkedList* head = nullptr;

void Insert(DoubleLinkedList** new_head, int new_value){

    /* Initiation
     * Assign the new value
     * If DLL is empty then
     * Assign the new node as head
     * Set prev and next to null
     * Else set the next new node as head
     * Set prev as null
     * Assign the new node as head
     */
    
    // Auto can be changed to LinkedList*, (recommended switching to auto)
    auto Node = new DoubleLinkedList();
    Node->value = new_value;
    
    if(new_head==nullptr){
        *new_head = Node;
        Node->next = Node->prev = nullptr;
    }else{
        Node->next = *new_head;
        Node->prev = nullptr;
        *new_head = Node;
    }
}

void LinearSearch(DoubleLinkedList* DLL, int key){
    while(DLL!=nullptr){
        if(key==DLL->value){cout << "exists";return;}
        DLL = DLL->next;
    }
    cout << "does not exist";
}

void PrintDoubleLinkedList(DoubleLinkedList* DLList){
    if(DLList!=nullptr){
        PrintDoubleLinkedList(DLList->next);
        cout << DLList->value << " ";
    }
}

int main() {
    
    Insert(&head, 4);
    Insert(&head, 5);
    Insert(&head, 6);
    Insert(&head, 7);
    
    cout << "Linked List: ";
    PrintDoubleLinkedList(head);
    
    cout << "\n";
    
    cout << "Search for value: ";
    int s; cin >> s;
    cout << "Value " << s << " ";
    LinearSearch(head, s);
    
    cout << "\n";
    // cerr << "\ntime elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
    return 0;
}
