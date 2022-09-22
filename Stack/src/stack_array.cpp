#include "stack_array.h"

#include <iostream>
using namespace std;

ArrayStack::ArrayStack(){
    topindex=-1;
}


bool ArrayStack::isEmpty(){
    if(topindex==-1){
        return true;
    }
    else{
        return false;
    }
}


bool ArrayStack::isFull(){
    if(topindex==MAX_STACKSIZE){
        return true;
    }
    else{
        return false;
    }
}


void ArrayStack::push(int num){
    if(!isFull()){
        topindex++;
        *(array+topindex)=num;
        
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}


int ArrayStack::pop(){
    int result;
    if(!isEmpty()){
        result=*(array+topindex);
        topindex--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
        
    }
    return result;
}

int ArrayStack::top(){
    return *(array+topindex);   
}


