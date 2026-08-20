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
int main(){           
    int n;
    cout<<"enter no of nodes in ll : ";
    cin>>n;
    Node* head=nullptr;
    Node* tail=nullptr;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        Node* newNode=new Node(x);

        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }  
    cout << endl;
    return 0;
}