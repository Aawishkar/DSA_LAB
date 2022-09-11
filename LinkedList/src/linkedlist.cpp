#include<iostream>
#include "linkedlist.h"

using namespace std;


//Checking List is empty or not
bool LinkedList::isEmpty(){
    if(HEAD==nullptr){
        return true;
    }
    else{
        return false;
    }
}

//Adding data to head of list
void LinkedList::addToHead(int data){
    Node* newNode= new Node(data);
    if(isEmpty()){
        HEAD=newNode;
        TAIL=newNode;
   }
   else{
        newNode->next=HEAD;
        HEAD=newNode;
   }
}

//Adding data to tail of list 
void LinkedList::addToTail(int data){
    Node *newNode= new Node(data);
    if(isEmpty()){
        HEAD=newNode;
        TAIL=newNode;
    }
    else{
        TAIL->next=newNode;
        TAIL=newNode;
    }
}

//Adding data in the list
void LinkedList::add(int data, Node* predecessor){
    Node *newNode = new Node(data);
    newNode->next=predecessor->next;
    predecessor->next=newNode;
}

//Removing data from the head of list
void LinkedList::removeFromHead(){
    Node *nodeToDelete =HEAD;
    HEAD=HEAD->next;
    delete nodeToDelete;

}

//Removing data from the list
void LinkedList::remove(int data){
   if (data==HEAD->data){
        removeFromHead();
   }
   else{
        Node *prev, *temp;
        prev=HEAD;
        temp=HEAD->next;

        while(temp!=nullptr){
            if(temp->data=data){
                break;
            }
            else{
                prev=prev->next;
                temp=temp->next;
            }
        }
        if (temp!=nullptr){
            prev->next=temp->next;
            delete temp;
            if (prev->next==nullptr){
                TAIL=prev;
            }
        }
        
   }
}


//Retrieve data from the Linked list
Node *LinkedList::retrieve(int data, Node *outputNodePointer)
{
    Node *temp = outputNodePointer;
    while (temp != nullptr)
    {
        if (temp->data == data)
        {
            return (temp);
        }
        temp = temp->next;
    }
    return nullptr ;
}

//Searching from LinkedList
bool LinkedList::search(int data)
{
    Node *temp = HEAD;
    while (temp->next != NULL)
    {
        if (temp->data == data)
        {
            return true;
        }
    temp = temp->next;
    
    }

    return false;
}

//Traverse in the Linked List
void LinkedList::traverse(){
    Node *temp;
    temp=HEAD;
    cout<<"\nContents of Linked List are";
    while(temp!=nullptr){
        cout<<"\t"<<temp->data;
        temp=temp->next;
    }
}