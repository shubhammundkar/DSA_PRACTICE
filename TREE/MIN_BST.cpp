#include <iostream>
using namespace std;
struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;

    bstNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

bstNode* getNewNode(int data){
    bstNode* newNode=new bstNode(data);
    return newNode;
}

bstNode* insert(bstNode* root ,int data){
    if(root==nullptr){
        return getNewNode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}
int findMin(bstNode* root){
    if(root==nullptr){
        cout<<"tree is empty"<<endl;
        return -1;
    }
    while(root->left!=nullptr){
        root=root->left;
    }
    return root->data;
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,5);

    cout<<"min value in tree is "<<findMin(root)<<endl;
    return 0;
}