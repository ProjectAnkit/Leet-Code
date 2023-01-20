
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>S;
        vector<int>V;

        if(root)
        {
            S.push(root);
        }

        while(!S.empty())
        {
            TreeNode *temp = S.top();
            if(temp->left)
            {
                S.push(temp->left);
                temp->left = NULL;
            } 
            
            else
            {
                
                if(temp->right)
                {
                    S.push(temp->right);
                    temp->right = NULL;
                }
                else
                {
                V.push_back(temp->val);
                S.pop();
                }
                
            }
        }
        return V;
    }
};
