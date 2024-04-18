#include "Queue.h"
using namespace std;
Queue::Queue(){
    front = nullptr;
    rear = nullptr;}
Queue::~Queue(){
    while (!isEmpty()) dequeue();}
void Queue::enqueue(int value){
    QueueNode* newNode = new QueueNode;
    newNode->data = value;
    newNode->next = nullptr;
    if (isEmpty()) front = newNode;
    else rear->next = newNode;
    rear = newNode;
}
void Queue::dequeue(){
    if (isEmpty()){
        cout << "Queue underflow! Cannot dequeue from an empty queue." << endl;
        return;}
    QueueNode* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete temp;}
bool Queue::isEmpty() {return front == nullptr;}
