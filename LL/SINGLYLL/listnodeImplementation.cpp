#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x){
        x=val;
        next=nullptr;
    }
};
int main(){
    ListNode* first=new ListNode(5);
    ListNode* second = new ListNode(10);
    ListNode* third=new ListNode(15);
    ListNode* fourth = new ListNode(20);

    first->next=second;
    second->next=third;
    first->next=second;
    second->next=third;

    ListNode* temp=first;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}