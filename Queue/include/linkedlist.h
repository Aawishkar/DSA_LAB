#ifndef LinkedList_h
#define LinkedList_h

class Node{
    public:
        int data;
        Node *next;
        Node(){}
        Node(int x){
            data =x;
            next=nullptr;
        }
        Node(int x, Node *y){
            data =x;
            next=y;
        }
};
class LinkedList{
    public:
        Node *HEAD;
        Node *TAIL;

        LinkedList(Node *HEAD =nullptr, Node *TAIL=nullptr){
            this->HEAD=HEAD;
            this->TAIL=TAIL;       
        }
        
        bool isEmpty();
        void addToTail(int );
        void removeFromHead();
        void traverse();
};

#endif