#include <iostream>
using namespace std;

template <class T>
class Queue{
    T *arr;
    int front, rear;
    int size_of_queue;
    int max_size_queue;

public:
    explicit Queue(int sz = 10);

    void dequeue();
    void enqueue(T t);
    void clear();
    void printQueue();
    T peek();

    int size();
    bool isEmpty();
    bool isFull();

    ~Queue(){delete[] arr;}
};

template<class T>
Queue<T>::Queue(int sz) {
    arr = new T[sz];
    max_size_queue = sz;
    front = 0;
    rear = -1;
    size_of_queue = 0;
}

template<class T>
void Queue<T>::dequeue() {
    if(isEmpty()){
        cout << "Queue is empty" << "\n";
        exit(EXIT_FAILURE);
    }
    cout << "Removing " << arr[front] << "\n";

    front = (front + 1) % max_size_queue;
    size_of_queue--;
}

template<class T>
void Queue<T>::enqueue(T t) {
    if(isFull()){
        cout << "Queue is Full" << "\n";
        exit(EXIT_FAILURE);
    }
    cout << "Inserting " << t << "\n";
    rear = (rear + 1) % max_size_queue;
    arr[rear] = t;
    size_of_queue++;
}

template<class T>
T Queue<T>::peek() {
    if(isEmpty()){
        cout << "Queue is empty" << "\n";
        exit(EXIT_FAILURE);
    }
    else return arr[front];
}

template<class T>
int Queue<T>::size() {
    return size_of_queue;
}

template<class T>
bool Queue<T>::isEmpty() {
    return size() == 0;
}

// return if size queue size is max
template<class T>
bool Queue<T>::isFull() {
    return size() == max_size_queue;
}

template<class T>
void Queue<T>::printQueue() {
    if(isEmpty()){
        cout << "Queue is empty";
        exit(EXIT_FAILURE);
    }
    while(front<rear+1){
        if(arr[front]!=0)cout << arr[front] << " ";
        front++;
    }
}

template<class T>
void Queue<T>::clear() {
    delete[] arr;
    front = 0;
    size_of_queue = 0;
    rear = -1;
    arr = new T[10];
}

int main() {
    Queue<int> q(10);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(6);
    q.enqueue(6);
    cout << q.size() << "\n";
    q.dequeue();
    q.printQueue();
    return 0;
}
