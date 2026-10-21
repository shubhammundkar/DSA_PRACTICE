#include <iostream>
#include <algorithm>
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

bstNode* FindNode(bstNode* root,int target){
    if(root==nullptr ){
        return nullptr;
    }
    else if(target==root->data){
        return root;
    }
    else if(target<=root->data){
        return FindNode(root->left,target);
    }
    else{
        return FindNode(root->right,target);
    }
}
int FindHeight(bstNode* root){
    if(root==nullptr)return -1;
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}

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

int FindDepth(bstNode* root,int data){
    int depth=0;
    while(root!=nullptr){
        if(root->data==data){
            return depth;
        }
        else if(root->data>=data){
            root=root->left;
        }
        else{
            root=root->right;
        }
        depth++;
    }
    return -1;
}

int main(){
    bstNode* root=nullptr;
    int vals[]={50,30,70,20,40,80,10};
    for(int v: vals) root=insert(root,v);

    int target=20;
    bstNode* node=FindNode(root,target);

    if(node==nullptr){
        cout<<target<<" not found"<<endl;
    } else {
        cout<<"height of "<<target<<" = "<<FindHeight(node)<<endl;   // 1
        cout<<"depth of "<<target<<" = "<<FindDepth(root,target)<<endl; // 2
    }
    return 0;
}