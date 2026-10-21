#include<iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;

    bstNode(int val){
        data=val;
        right=nullptr;
        left=nullptr;
    }
};

bstNode* getNewNode(int data){
    bstNode* newNode=new bstNode(data);
    return newNode;
}

bstNode* insert(bstNode* root,int data){
    if(root==nullptr){
        root = getNewNode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

bool search(bstNode* root,int data){
    if(root==nullptr){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data<root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,17);

    cout<<search(root,10)<<endl;
    return 0;
}