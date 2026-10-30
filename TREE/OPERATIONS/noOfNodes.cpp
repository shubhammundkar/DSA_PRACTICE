#include<iostream>
#include<climits>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;

    bstNode(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

int noOfNodes(bstNode* root){
    if(root==nullptr)return 0;
    if(root->left==nullptr) return 1;
    if(root->right==nullptr) return 1;
    return noOfNodes(root->left)+noOfNodes(root->right)+1;
}