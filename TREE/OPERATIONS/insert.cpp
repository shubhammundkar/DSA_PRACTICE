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

bstNode* getNewNode(int val){
    bstNode* newNode=new bstNode(val);
    newNode->data=val;
    return newNode;
}

bstNode* insert(bstNode* root,int val){
    if(root==nullptr){
        root=getNewNode(val);
    }
    else if(root->data<=val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,25);
    return 0;
}