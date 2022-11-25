class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int min=0;
        int temp;

       while(start<=end)
       {
           nums[start] = nums[start]*nums[start];
           start++;
       }
       for(int i=0;i<=(end-1);i++)
       {
           for(int j=i+1;j<=end;j++)
           {
               if(nums[min]>nums[j])
               {
                   min = j;
               }
           }
           if(min!=i)
           {
               temp = nums[min];
               nums[min] = nums[i];
               nums[i] = temp;
           }
           min = i+1;
       }   
     return nums;
    }
};
