#include "Stack.h"
using namespace std;
Stack::Stack() : top(nullptr){}
Stack::~Stack(){
    while(!isEmpty()){
        pop();
    }
}
void Stack::push(int value) {
    StackNode* newNode = new StackNode;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
void Stack::pop() {
    if (isEmpty()){
        cout << "stack underflow" << endl;
        return -1;
    }
    StackNode* temp = top;
    top = top->next;
    delete temp;
}
int Stack::peek(){
    if (isEmpty()){
        cout << "empty" << endl;
        return -1;
    }
    return top->data;
}
bool Stack::isEmpty() {
    return top == nullptr;
}