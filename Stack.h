#ifndef STACK_H
#define STACK_H

struct StackNode
{
    int data;
    struct StackNode* next;
};
class Stack{
        private:
                struct StackNode* top;
        public:
                Stack();
                ~Stack();
                void push(int value);
                void pop();
                bool isEmpty();
        };
#endif

