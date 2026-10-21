#include <iostream>
#include <queue>

using namespace std;

// Definition of the Binary Search Tree Node
struct bstNode {
    int data;
    bstNode* left;
    bstNode* right;

    // Constructor to initialize a new node
    bstNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Helper function to insert a new node into the BST
bstNode* insert(bstNode* root, int data) {
    if (root == nullptr) {
        return new bstNode(data);
    }
    if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Your Level Order Traversal implementation
void levelOrder(bstNode* root) {
    if (root == nullptr) return;
    
    queue<bstNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        bstNode* current = q.front();
        q.pop();
        cout << current->data << " ";
        
        if (current->left != nullptr) {
            q.push(current->left);
        }
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
    cout << endl;
}

// Main function to run and test the program
int main() {
    bstNode* root = nullptr;

    /* Creating the following BST:
            15
           /  \
          10   20
         /  \    \
        8   12   25
    */
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 25);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}
