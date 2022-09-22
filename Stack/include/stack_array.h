#ifndef ArrayStack_h
#define ArrayStack_h
#define MAX_STACKSIZE 50
#include "stack.h"

class ArrayStack: public Stack{
    public:
        int array[MAX_STACKSIZE];
        int topindex;
        ArrayStack();
        void push(int );
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
};


#endif
