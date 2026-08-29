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
void deleteAtBegning(Node*& head){
    Node* temp = head;
    head=head->next;
    delete temp;
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

    deleteAtBegning(head);
    display(head);
    return 0;
}