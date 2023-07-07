#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *root, int X){
    // inorder traversal
    // Iterative Approach
    int ans = -1;
    bool flag = true;
    BinaryTreeNode<int>* curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            if((curr->data >= X) && flag) {
                ans = curr->data;
                flag = false;
            }
            curr = curr->right;
        }
        else{
            BinaryTreeNode<int>* pred = curr->left;
            while(pred->right != NULL && pred->right != curr){
                pred = pred->right;
            }
            if(pred->right == NULL){
                pred->right = curr;
                curr = curr->left;
            }
            else{
                if((curr->data >= X) && flag) {
                    ans = curr->data;
                    flag = false;
                }
                pred->right = NULL;
                curr = curr->right;
            }
        }
    }
    return ans;
}
