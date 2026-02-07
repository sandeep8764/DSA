#include <iostream>
using namespace std;

// STEP 1: Define Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// STEP 2: Insert into BST (Recursive)
Node* insertBST(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}

// STEP 3: Search in BST
bool searchBST(Node* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

// STEP 4: Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// STEP 5: Main Function
int main() {
    Node* root = NULL;

    root = insertBST(root, 10);
    insertBST(root, 5);
    insertBST(root, 15);
    insertBST(root, 3);
    insertBST(root, 7);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\nSearching 7: ";
    if (searchBST(root, 7))
        cout << "Found";
    else
        cout << "Not Found" << endl;

    return 0;
}
