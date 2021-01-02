#include <iostream>
using namespace std;

struct LinkedList{
    int value;
    LinkedList* next;
};

void Insert(LinkedList** LL, int new_value){

    //Initiation
    auto Node = new LinkedList();

    //Assign the new value
    Node->value = new_value;

    //Assign the next node as head
    Node->next = *LL;

    //Point the node
    *LL = Node;
}

int main() {
    LinkedList* head = nullptr;
    cout << "Insert a data: ";
    int d; cin >> d;
    Insert(&head, d);
    return 0;
}
