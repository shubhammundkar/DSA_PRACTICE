#include<iostream>
using namespace std;
// 1. 
// 	• Chain: top → [30] → [20] → [10] → nullptr


struct Node{
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == nullptr){
        cout<<"stack is empty";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

void peek(){
    if(top == nullptr){
        cout<<"stack is empty";
        return;
    }
    cout<<top->data;
}

bool isEmpty(){
    return top == nullptr;
}

void display(){
    if(top == nullptr){
        cout<<"stack is empty";
        return;
    }
    Node* curr = top;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}