void preOrder(bstNode* root){
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(bstNode* root){
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(bstNode* root){
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<," ";
}