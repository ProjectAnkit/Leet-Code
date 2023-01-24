class Solution {
public:

    unordered_map<TreeNode*,int>mp;
    
    int getHeight(TreeNode *root)
    {
        if(!root)
        return 0;

        int n = 1+max(getHeight(root->left),getHeight(root->right));
        return n;
    }

    bool isBalanced(TreeNode* root) {
       if(!root)
       {
           return true;
       } 
       int l = getHeight(root->left);
       int r = getHeight(root->right);

       return (abs(l-r)<2) && isBalanced(root->left) && isBalanced(root->right);
    }
};
