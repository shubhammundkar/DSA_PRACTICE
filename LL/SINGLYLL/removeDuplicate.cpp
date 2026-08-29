#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
    Node(int x){
        data=x;
        next=nullptr;
    }
};

void deleteDuplicate(Node*& head){
    Node* temp=head;
    while(temp!=nullptr && temp->next!=nullptr){
        if(temp->data==temp->next->data){
            Node* dupliacate=temp->next;
            temp->next=dupliacate->next;
            delete dupliacate;
        }
        else{
            temp=temp->next;
        } 
    }
}
void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(20);
    Node* fourth=new Node(40);

    head->next=second;
    second->next=third;
    third->next=fourth;

    deleteDuplicate(head);
    display(head);
    return 0;
}