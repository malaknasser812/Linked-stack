//Stack implementation as a template (pointers based)
//linked stack (consists of nodes.. each node contain data and next*)
#include <iostream>
using namespace std;
template <class T>

class Stack{
    //definitoin of the node
    struct node{
        T data;
        node* next;
    };
public:
    //constructor 
    Stack(){
        node* top = nullptr;
    }

    //adding node to the end of the stack
    void push(T value){
        node* newnode = new node;
        newnode->data= value;
        newnode->next = top;
        top = newnode;
    }

    //removing node from the begining of the stack
    void pop(){
        if(top == nullptr)
            cout<< "Stack is empty on pop";
        else{
            node* temptr= top;
            temptr= top;
            top = top ->next;
            temptr = temptr->next =nullptr;
            delete temptr;
        }
    }
    //same function as pop exepct for returning the popped node
    void pop(T &stacktop){
        if(top == nullptr)
            cout<< "Stack is empty on pop";
        else{
            node* temptr= top;
            stacktop=temptr->data;
            temptr= top;
            top =top->next;
            temptr = temptr->next =nullptr;
            delete temptr;
        }
    }

    //returning the value of the top node
    void gettop(T &stacktop){
        if(top == nullptr)
            cout<< "Stack is empty on get top"<<endl;
        else{
            stacktop = top->data;
        }
    }

    //printing all values inside the stack
    void display(){
        node* temp =top;
        cout<< "[ ";
        while (temp != nullptr){
            cout<< temp->data<<" ";
            temp = temp->next;
        }
        cout<<"]"<<endl;
    }
};
int main() {



    return 0;
}
