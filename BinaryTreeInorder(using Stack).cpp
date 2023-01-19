class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>Z;
        stack<TreeNode*>S;

        if(root!=NULL)
        {
            S.push(root);
        }
        
        while(!S.empty())
        {
            TreeNode *temp = S.top();
            if(temp->left!=NULL)
            {
               S.push(temp->left);
               temp->left=NULL;
            }
            else
            {
               Z.push_back(temp->val);
               S.pop();
               if(temp->right!=NULL)
               {
                   S.push(temp->right);
               }
            }
        }
        return Z;
    }
};
