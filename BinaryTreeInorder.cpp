
class Solution {
public:

    void Traverse(TreeNode *root,vector<int>&Node)
    {
        if(root==NULL)
        {
            return ;
        }
        Traverse(root->left,Node);
        Node.push_back(root->val);
        Traverse(root->right,Node);
    } 

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>Node;
        Traverse(root,Node);
        return Node;
    }
};
