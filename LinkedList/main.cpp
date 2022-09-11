#include<iostream>
#include "linkedlist.h"

using namespace std;
int main(){
    LinkedList list;
    Node *ptr;

    if(list.isEmpty()){
        cout<<"\nThe list Is Empty";     
    }
    else{
        cout<<"\nThe List is Not Empty";
    }

    list.addToHead(12);
    cout<<"\n12 is successfully added to head";

    list.addToTail(88);
    cout<<"\n88 is successfully added to tail ";

    list.traverse();

    list.addToHead(66);
    cout<<"\n66 is successfully added to head";

    list.addToTail(11);
    cout<<"\n11 is successfully added to tail ";

    list.traverse();

    list.add(21,list.HEAD);
    cout<<"\n21 has been added successfully";

    list.traverse();

    list.removeFromHead();
    cout<<"\n66 is successfully removed from head";
    list.traverse();

    list.remove(11);
    cout<<"\n11 has been successfully removed";
    list.traverse();

    cout<<"\nRetrieved Data: "<<list.retrieve(11,list.HEAD);

    cout<<"\nSearch Result"<<endl;
    cout<<list.search(11)<<endl;
    cout<<list.search(21)<<endl;
    
}