#include<iostream>
#include<algorithm>
using namespace std;
struct bstNode{
    int data;
    bstNode* left=0;
    bstNode* right=0;

    bstNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

int FindHeight(bstNode* root){
    if(root==nullptr){
        return -1;
    }
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}

bstNode* getNewNode(int data){
    bstNode* newNode=new bstNode(data);
    return newNode;
}

bstNode* insert(bstNode* root,int data){
    if(root==nullptr){
        root=getNewNode(data);
    }
    else if(data<=root->data){
        root->left= insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

int main(){
    bstNode* root=nullptr;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,5);

    cout<<"height of tree is : "<<FindHeight(root)<<endl;
    return 0;
}