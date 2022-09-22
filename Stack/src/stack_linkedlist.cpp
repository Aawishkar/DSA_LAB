#include "stack_linkedlist.h"

LinkedListStack::LinkedListStack(){
    list=new LinkedList();
}


bool LinkedListStack::isEmpty(){
    if(list->Empty()){
        return true;
    }    
    else{
        return false;
    }
}

bool LinkedListStack::isFull()
{
    return false;
}
void LinkedListStack::push(int num)
{
    list->addToHead(num);
}

int LinkedListStack::pop()
{
    int result;
    result= list->HEAD->data;
    list->removeFromHead();
    return result;
}
int LinkedListStack::top()
{
    return list->HEAD->data;
}

