#ifndef ArrayQueue_h
#define ArrayQueue_h
#define MAX_SIZE 50

#include "queue.h"


class ArrayQueue:public Queue{
    private:
        int array[MAX_SIZE];
        int fron;
        int rear;
    public:
        ArrayQueue(){
            fron=0;
            rear=0;
        }
        bool isEmpty();
        bool isFull(); 
        void enqueue(int data);
        int dequeue();
        int front();
        int back();  
        void display();
};
#endif