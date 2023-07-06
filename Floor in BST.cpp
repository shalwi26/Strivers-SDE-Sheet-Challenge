#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    // inorder traversal
    // Recursive Approach
    // Base Case
    if(root == NULL) return -1;
    int left = floorInBST(root->left, X);
    if(root->val > X) return left;
    int right = floorInBST(root->right, X);
    return max(root->val, right);
}
