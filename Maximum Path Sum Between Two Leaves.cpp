// please upvote if you understand and if anyone have doubt then they can ask me 

long long int f(TreeNode<int>*root,long long int& ans){

    if(root==NULL) return 0;

    //find left and right max sum of current node so that we can return to parent node

    long long int left=f(root->left,ans);

    long long int right=f(root->right,ans);

    ans=max(ans,root->val+left+right);

    return root->val+max(left,right);

}

long long int findMaxSumPath(TreeNode<int> *root)

{

  // if root is null or root has no leaves then return -1

    if(root==NULL || root->left==NULL || root->right==NULL) return -1;

    long long int ans=0;

    f(root,ans);

    return ans;

}

 

