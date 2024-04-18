#ifndef QUEUE_H
#define QUEUE_H
struct QueueNode
{
    int data;
    struct QueueNode* next;
};
class Queue{
    private:
        struct QueueNode* front;
        struct QueueNode* rear;
    public:
        Queue();
        ~Queue();
        void enqueue(int value);
        void dequeue();
        bool isEmpty();
        };
#endif
