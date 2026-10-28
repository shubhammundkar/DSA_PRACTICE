#include<iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* right;
    bstNode* left;

    bstNode(int x){
        data=x;
        right=nullptr;
        left=nullptr;
    }
};

bstNode* getNewNode(int data){
    bstNode* newNode= new bstNode(data);
    newNode->data=data;
    return newNode;
}

bstNode* insert(bstNode* root,int data){
    if(root==nullptr){
        root=getNewNode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
}
int search(bstNode* root,int data){
    if(root==nullptr){
        cout<<"tree is completely empty";
        return 0;
    }
    else if(root->data==data){
        cout<<"found";
        return;
    }
    else if(root->data<data){
        search(root->left,data);
    }
    else{
        search(root->right,data);
    }
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,17);
    root=insert(root,14);
    root=insert(root,35);

    cout<<"enter value to be searched : ";
    int x;
    cin>>x;
    search(root,x);
    return 0;
}