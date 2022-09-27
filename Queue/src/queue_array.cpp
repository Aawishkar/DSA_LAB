#include <iostream>
#include "queue_array.h"


using namespace std;


bool ArrayQueue::isEmpty(){
    if(fron==0 && rear==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayQueue::isFull(){
    if(rear==MAX_SIZE-1){
        return true;
    }
    else{
        return false;
    }
}

void ArrayQueue:: enqueue(int data){
    if(!isFull()){
        rear=(rear+1)%MAX_SIZE;
        array[rear]=data;
    }
    else{
        cout<<"\nArray is Full"<<endl;
    }
}

int ArrayQueue:: dequeue(){
    int result;
    if(!isEmpty()){
        fron=(fron+1)%MAX_SIZE;
        result=array[fron];
    }
    else{
        cout<<"\nQueue is Empty";
    }
    return result;

}


int ArrayQueue::front(){
    return array[(fron+1)%MAX_SIZE];
    

}

int ArrayQueue::back(){
   return  array[(rear)%MAX_SIZE];

}
void ArrayQueue::display()
    {
        int i;
        if (isEmpty()) cout<<"The Circular Queue is empty."<<endl;
        else
        {
            cout<<"State of the Queue is "<<endl;
            for (i=fron; i!=rear;i= (i+1)%MAX_SIZE)
                cout<<array[i]<<" \n";
        cout<<array[i]<<endl;
    }
  }







