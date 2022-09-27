
#include <iostream>
#include "queue.h"

#include "linkedlist.h"
#include "queue_array.h"
#include "queue_linkedlist.h"


using namespace std;

int  main(){
    Queue *queue;
    ArrayQueue array1;
    queue=&array1;
    cout<<"implementation of queue using array"<<endl;
    if(queue->isEmpty()==true){
        cout<<"queue is empty"<<endl;
    }
    else 
    cout<<"queue is not empty,elements can be deleted if you want"<<endl;

    if(queue->isFull()==true){
        cout<<"queue is full"<<endl;
    }
    else
     cout<<"queue is not full,elements can be inserted if you want"<<endl;

    queue->enqueue(5);
    queue->enqueue(6);
    queue->enqueue(7);
    queue->enqueue(8);
    queue->enqueue(9);
    queue->enqueue(10);
    queue->display();
    queue->dequeue();
    queue->dequeue();
    queue->display();

    array1.front();
    array1.back();
   
    cout<<"\n**************"<<endl;
    cout<<"implementation of queue using linked list"<<endl;

 
    LinkedListQueue linkedlist;
    queue=&linkedlist;
    queue->isEmpty();
    queue->isFull();

    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);
    queue->enqueue(4);
    queue->enqueue(5);
    queue->enqueue(6);
    cout<<"\n the elements in queue are"<<endl;
    queue->display();
    queue->dequeue();
    queue->dequeue();
    cout<<"\n After removing elements,remaining elements in queue are"<<endl;
    queue->display();
    cout<<endl;
    queue->front();
    queue->back();
    
}
    


