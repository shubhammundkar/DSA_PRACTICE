#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=nullptr;
    }
};

void insertAtPosition(Node*& head, int value, int position){
    if(position<0){
        cout<<"Invalid position";
        return;
    }
    if(position==0){
        Node* newNode= new Node(value);
        newNode->next=head;
        head=newNode;
        return;
    }
    
    Node* temp=head;
    for(int i=0;i<position-1 && temp != nullptr;i++){
        
        temp=temp->next;
    }
    if(temp==nullptr){
        cout<<position<<" is out of range"<<endl; 
        return;
    }

    Node* newNode=new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;

}

void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* tail = new Node(40);

    head->next=second;
    second->next=third;
    third->next=tail;
    int value,position;
    cin>>value;
    cin>>position;
    insertAtPosition(head,value,position);
    display(head);
    return 0;
}