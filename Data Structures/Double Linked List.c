#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct tnode {
    int value;
    struct tnode *next;
    struct tnode *prev;
}*head,*tail,*curr;

struct tnode *temp;
/*
 Pseudocode pushHead(int angka)
 1.Alokasi memori untuk data baru
 2.Assign data pada struct
 3.Assign jika curr next dan prev adalah NULL
 4.Jika linked list kosong, maka data pertama adalah (head = tail = current)
 5.Jika tidak kosong, maka perubahan head menjadi data terbaru
 
*/
void pushHead(int angka){

    curr=(struct tnode*)malloc(sizeof(struct tnode));
    curr->value=angka;
    curr->next=curr->prev=NULL;
    if(!head){
        head=tail=curr;
    }
    else
    {
        curr->next=head;
        head->prev=curr;
        head=curr;
    }
    
}

/*
 Pseudocode pushTail(int angka)
 1.Alokasi memori untuk data baru
 2.Assign data pada struct
 3.Assign jika curr next dan prev adalah NULL
 4.Jika linked list kosong, maka data pertama adalah (head = tail = current)
 5.Jika tidak kosong, maka perubahan tail menjadi data terbaru
 
*/
void pushTail(int angka){
    
    curr=(struct tnode*)malloc(sizeof(struct tnode));
    curr->value = angka;
    curr->next = curr->prev = NULL;
    if(!head)
    {
        head = tail = curr;
    }
    else{
        curr->prev = tail;
        tail->next = curr;
        tail = curr;
    }
}


/*
 Pseudocode pushMiddle(int angka)
 1.Alokasi memori untuk data baru
 2.Assign data baru pada struct
 3.Assign jika curr next dan prev adalah NULL
 4.Jika linked list kosong, maka assign head = tail = curr
 5.Jika value pada head lebih besar dari value int angka,
   maka ubah angka yang lebih besar menjadi head
 6.Jika value pada tail lebih besar dari value int angka,
   maka ubah angka yang lebih besar menjadi tail
 7.Jika tidak,
   assign struct tnode *temp,
   assign temp = head,
   mencari posisi dimana angka tersebut akan dimasukkan menggunakan while looping,
   jika ketemu, mengassign data tersebut pada posisinya
 */

void pushMiddle(int angka){
    
    curr=(struct tnode*)malloc(sizeof(struct tnode));
    curr->value = angka;
    curr->next = curr->prev = NULL;
    if(!head)
    {
        head = tail = curr;
    }
    else if(head->value > angka){

        curr->next = head;
        head->prev = curr;
        head = curr;
    }
    else if(tail->value > angka){
        curr->prev = tail;
        tail->next = curr;
        tail = curr;
    }
    else{
        temp = head;
        while(angka > temp->value)temp = temp->next;
        curr->next = temp;
        curr->prev = temp->prev;
        temp->prev = curr;
        curr->prev->next = curr;
    }
}


/*
 Pseudocode pop(int angka)
 1.
 2.
 3.
 ...etc.
 
 */
void pop(int angka){
    int count = 0;
    tnode* tmp = head;
    while (tmp != NULL) {
        if (tmp->value == angka)count++;
        tmp = tmp->next;
    }
    for (int i = 0; i < count; i++) {
        tmp = head;
        if (head->value == angka) {
            head = head->next;
            free(tmp);
        }
        else {
            while (tmp->next->value != angka) {
                tmp = tmp->next;
            }
            if (tmp->next != NULL) {
                tnode* buff = tmp->next;
                tmp->next = buff->next;
                free(buff);
            }
            else {
                free(tmp->next);
                tmp->next = NULL;
            }
        }
    }
}

int main(){
    pushHead (3);
    pushHead(4);
    pushTail(12);
    pushTail(23);
    pushMiddle(8);
    pushMiddle(2);
    pop(23);
    pop(10);
    
    //2 4 3 12 8
    
    struct tnode *curr = head;
    //curr = head;
    int i=1;

    while (curr != NULL)
    {
        printf("Nilai node ke-%d: %d\n",i, curr->value);
        printf("Alamat node ke-%d: %p\n",i,curr);
        printf("Isi prev node ke-%d: %p\n",i,curr->prev);
        printf("Isi next node ke-%d: %p\n\n",i,curr->next);

        //curr=curry;
        curr=curr->next;
        i=i+1;
    }
    getchar();
}
