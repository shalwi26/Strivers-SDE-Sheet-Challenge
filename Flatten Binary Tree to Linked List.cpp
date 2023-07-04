#include <bits/stdc++.h>


TreeNode<int> *flattenBinaryTree(TreeNode<int> *root) {
  if (!root)
    return NULL;

  TreeNode<int> *curr = root;
  while (curr) {
    if (curr->left) {
      TreeNode<int> *node = curr->left;
      while (node->right)
        node = node->right;

      node->right = curr->right;
      curr->right = curr->left;
      curr->left = NULL;
    }

    curr = curr->right;
  }

  return root;
}
