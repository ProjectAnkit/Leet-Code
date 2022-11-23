class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end)
        {
            if(target > nums[start])
            start++;
            else
            return start;
        }
        return start;
    }
};
