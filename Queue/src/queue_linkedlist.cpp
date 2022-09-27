#include<iostream>
#include "queue_linkedlist.h"
#include "linkedlist.h"
using namespace std;


LinkedListQueue::LinkedListQueue()
{
 
    list.HEAD=NULL;
    list.TAIL=NULL;
}
void LinkedListQueue::enqueue(int data)
{
    
    if (isFull()){
        cout<<"full"<<endl;
    }
    else{
        list.addToTail(data);
    }
        

}
int LinkedListQueue::dequeue(){
    int element;
    if(isEmpty()){
        cout<<" empty";
    }
    else
    {
        list.removeFromHead();
    }
    cout<< element;
}
bool LinkedListQueue::isEmpty(){
    list.isEmpty();
    
}
bool LinkedListQueue::isFull(){
    return 0;
}


int LinkedListQueue::front(){
    return list.HEAD->data;
}
int LinkedListQueue::back(){
    return list.TAIL->data;
}
void LinkedListQueue::display(){
    list.traverse();
}


