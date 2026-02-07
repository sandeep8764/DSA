// Leetcode Question 700

#include <iostream>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

// Solution class
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return nullptr;

        if (root->val == val)
            return root;

        if (root->val < val)
            return searchBST(root->right, val);
        else
            return searchBST(root->left, val);
    }
};

// Helper function to insert nodes (to build BST)
TreeNode* insertBST(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}

int main() {
    Solution obj;

    TreeNode* root = NULL;

    // Build BST
    root = insertBST(root, 10);
    insertBST(root, 5);
    insertBST(root, 15);
    insertBST(root, 3);
    insertBST(root, 7);
    insertBST(root, 12);
    insertBST(root, 18);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    TreeNode* result = obj.searchBST(root, key);

    if (result != NULL)
        cout << "Value FOUND in BST" << endl;
    else
        cout << "Value NOT FOUND in BST" << endl;

    return 0;
}
