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



//Removing data from the head of list
void LinkedList::removeFromHead(){
    Node *nodeToDelete =HEAD;
    HEAD=HEAD->next;
    delete nodeToDelete;

}
void LinkedList::traverse(){
   Node* temp;
   temp=HEAD;
   
   while(temp!=nullptr){
      cout<<temp->data<<endl;
      temp=temp->next;
   }
}
