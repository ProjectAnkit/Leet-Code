class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        bool flag = false;
       
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    flag = true;
                }
            }
        }
        return flag;
    }
};
