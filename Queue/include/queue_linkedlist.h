#ifndef LinkedlistQueue_h
#define LinkedlistQueue_h
#include "queue.h"
#include"linkedList.h"
#include <iostream>


class LinkedListQueue:public Queue{
    public: 
        LinkedList list;
        LinkedListQueue();
        
        void enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int  front();
        int  back();
        void display();

};

#endif