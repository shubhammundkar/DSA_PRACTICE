#include<iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;

    bstNode(int x){
        data=x;
        right=nullptr;
        left=nullptr;
    }
};

bstNode* getNewNode(int data){
    bstNode* newNode=new bstNode(data);
    newNode->data=data;
    return newNode;
}

bstNode* insert(bstNode* root,int data){
    if(root==nullptr){
        root=getNewNode(data);
    }
    else if(root->data<=data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,25);
    return 0;
}