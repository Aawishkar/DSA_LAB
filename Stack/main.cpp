#include <iostream>
using namespace std;
#include "stack_array.h"
#include "stack_linkedlist.h"


int main()
{
    cout<<"\n\tStack Implementation Using Array";


    Stack *A1 = new ArrayStack();

    cout<<"\n\nEmpty check";
    if(A1->isEmpty()){
        cout<<"\nStack is Empty";
    }
    else{
        cout<<"\nStack is Not Empty";
    }

    cout<<"\n\nFull check";
    if(A1->isFull()){
        cout<<"\nStack is Full";
    }
    else
    {
        cout<<"\nStack is Not Full";
    }




    cout<<endl<<"\nPushing into stack";
    A1->push(19);
    A1->push(12);
    A1->push(14);


    if(A1->isFull())
    {
        cout<<"\nStack is Full";
    }
    else
    {
        cout<<"\nStack is Not Full";
    }


    cout<<endl<<"\nPop implementation";
    cout<<"\nPopped "<<A1->pop();
    cout<<"\nPopped "<<A1->pop();

    if(A1->isEmpty())
    {
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nStack is Not Empty";
    }

    delete A1;


    cout<<"\n\n\tStack Implementation Using Linked List";
    Stack *A2=new LinkedListStack();
    
    cout<<"\n\nEmpty check";
    if(A2->isEmpty())
    {
        
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nStack is Not Empty";
    }

    
    cout<<"\n\nFull check";
    if(A2->isFull())
    {
        cout<<"\nStack is Full";
    }
    else
    {
        cout<<"\nStack is Not Full";
    }

    cout<<endl<<"\nPush Implementation";
    A2->push(13);
    A2->push(45);
    A2->push(9);
    if(A2->isFull())
    {
        cout<<"\nStack is Full";
    }
    else
    {
        cout<<"\nStack is Not Full";
    }


    cout<<endl<<"\nPop implementation";
    cout<<"\nPopped "<<A2->pop();
    cout<<"\nPopped "<<A2->pop();
    if(A2->isEmpty())
    {
        cout<<"\nStack is Empty";
    }
    else
    {
        cout<<"\nStack is Not Empty\n";
    }
    delete A2;
}