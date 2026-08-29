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
void delete(Node*& head,int x){
    if(head==nullptr|| position <= 0) return;
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

void display(Node* head){
   
    if(head->next==nullptr){
        delete head;
        
    }
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
    Node* fourth = new Node(40);

    head->next=second;
    second->next=third;
    third->next=fourth;

    delete(head,3);
    display(head);
    return 0;
}


