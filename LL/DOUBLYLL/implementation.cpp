#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data=x;
        next=nullptr;
        prev=nullptr;
    }
};
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    head->next=second;
    third->prev=second;
    second->next=third;
    fourth->prev=third;
    third->next=fourth;

    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}