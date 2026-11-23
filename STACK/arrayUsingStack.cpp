#include<iostream>
using namespace std;
#define size 5

int st[size];
int top = -1;

void push(int x){
    if(top == size-1){
        cout<<"stack overflow";
        return;
    }
    top++;
    st[top] = x;
}

void pop(){
    if(top == -1){
        cout<<"stack underflow";
        return;
    }
    cout<<" deleted : "<<st[top];
    top--;
}

void peek(){
    if(top == -1){
        cout<<"stack is empty";
        return;
    }
    cout<<st[top];
}

void display(){
    if(top == -1){
        cout<<"st is empty";
        return;
    }
    for(int i=top;i>=0;i++){
        cout<<st[i]<<" ";
    }
}

int main(){
    
}