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
Node* deleteAtPosition(Node*& head,int position){
     Node* temp=head;
    if(position<0){
        cout<<"invalid position";
        return head;}
    if(head==nullptr){
        cout<<"ll is empty";
        return head;
    }
    if(position==0){
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;
        return head;
    }
    for(int i=0;i<position-1 && temp!=nullptr;i++){
        temp=temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of bounds" << endl;
        return head;
    }
    Node* deleteNode=temp->next;
    temp->next=deleteNode->next;
    delete deleteNode;
    
    return head;
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

    deleteAtPosition(head,2);
    display(head);
    return 0;
}