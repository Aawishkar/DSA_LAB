#ifndef LinkedListStack_h
#define LinkedListStack_h
#include "stack.h"
#include "linkedlist.h"
class LinkedListStack : public Stack
{
    public:
        LinkedList *list;
        LinkedListStack();
        void push(int);
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
};



#endif