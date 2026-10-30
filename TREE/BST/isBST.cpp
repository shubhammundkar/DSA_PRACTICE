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

bool isBstUtil(bstNode* node,long long min_val,long long max_val){
    if(node==nullptr){
        return true;
    }
    if(node->data<=min_val || node->data>=max_val){
        return false;
    }
    return isBstUtil(node->left,min_val,node->data) &&
           isBstUtil(node->right,node->data,max_val);
}

bool isBst(bstNode* root){
    return isBstUtil(root,LLONG_MIN,LLONG_MAX);
}