#include <iostream>
using namespace std;

struct LinkedList{
    int value;
    LinkedList* next;
};

LinkedList* head = nullptr;

void Insert(LinkedList** new_head, int new_value){

    /* Initiation
     * Assign the new value
     * Assign the next node as head
     * Point the node
     */
    
    //Auto can be changed to LinkedList*, (recommended switching to auto)
    auto Node = new LinkedList();
    Node->value = new_value;
    Node->next = *new_head;
    *new_head = Node;
}

void LinearSearch(LinkedList* LL, int key){
    while(LL!=nullptr){
        if(key==LL->value){cout << "exists";return;}
        LL = LL->next;
    }
    cout << "does not exist";
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

    Insert(&head, 4);
    Insert(&head, 5);
    Insert(&head, 6);
    Insert(&head, 7);
    
    cout << "Linked List: ";
    PrintLinkedList(head);
    
    cout << "\n";
    
    cout << "Sum of all data LL: " << SumLinkedList(head);
    
    cout << "\n";
    
    cout << "Maximum Value: " << MaximumValueLL(head)   ;
    
    cout << "\n";
    
    cout << "Minimum Value: " << MinimumValueLL(head);
    
    cout << "\n";
    
    cout << "Search for value: ";
    int s; cin >> s;
    cout << "Value " << s << " ";
    LinearSearch(head, s);
    
    cout << "\n";
    // cerr << "\ntime elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
    return 0;
}
