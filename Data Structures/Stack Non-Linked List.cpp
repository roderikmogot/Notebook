#include <iostream>
using namespace std;

template <class T>
class Stack{
    T *arr;
    int upper, size_stack;

public:
    explicit Stack(int sz = 10);

    void push(T);
    void printStack();
    void clear();
    T pop();
    T peek();

    int size();
    bool isEmpty();
    bool isFull();

    ~Stack(){delete[] arr;}
};

template<class T>
Stack<T>::Stack(int sz) {
    arr = new T[sz];
    size_stack = sz;
    upper = -1;
}

template<class T>
void Stack<T>::push(T t) {
    if(isFull()){
        cout << "Stack is Full" << "\n";
        exit(EXIT_FAILURE);
    }
    cout << "Inserting " << t << "\n";
    arr[++upper] = t;
}

template<class T>
T Stack<T>::pop() {
    if(isEmpty()){
        cout << "Stack is empty" << "\n";
        exit(EXIT_FAILURE);
    }
    cout << "Removing " << peek() << "\n";
    return arr[upper--];
}

template<class T>
T Stack<T>::peek() {
    if(isEmpty()){
        cout << "Stack is empty" << "\n";
        exit(EXIT_FAILURE);
    }
    else return arr[upper];
}

template<class T>
int Stack<T>::size() {
    return upper + 1;
}

template<class T>
bool Stack<T>::isEmpty() {
    return upper == -1;
}

// return if size stack size is max
template<class T>
bool Stack<T>::isFull() {
    return upper == size_stack - 1;
}

template<class T>
void Stack<T>::printStack() {
    if(isEmpty()){
        cout << "Stack is empty";
        exit(EXIT_FAILURE);
    }
    int i = upper;
    while(i>=0){
        if(arr[i]!=0)cout << arr[i] << " ";
        i--;
    }
}

template<class T>
void Stack<T>::clear() {
    delete[] arr;
    upper = -1;
    arr = new T[10];
}

int main() {
    Stack<int> s(10);
    s.push(9);
    s.push(12);
    s.push(13);
    s.pop();
    s.printStack();
    s.clear();
    cout << "\n";
    s.push(12);
    s.push(13);
    s.printStack();
    return 0;
}
