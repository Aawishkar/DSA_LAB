#include<iostream>
#include "linkedlist.h"
#include "stack_linkedlist.h"


using namespace std;


//Checking List is empty or not
bool LinkedList::Empty(){
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
    if(Empty()){
        HEAD=newNode;
        TAIL=newNode;
   }
   else{
        newNode->next=HEAD;
        HEAD=newNode;
   }
}



//Removing data from the head of list
void LinkedList::removeFromHead(){
    Node *nodeToDelete =HEAD;
    HEAD=HEAD->next;
    delete nodeToDelete;

}

