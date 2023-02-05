class Solution {
public:
    
    long long pickGifts(vector<int>& gifts, int k) {
     
        long long sum = 0;
     while(k--)
     {
         int o;
         long long max = gifts[0];
         for(int i=1;i<gifts.size();i++)
         {
             if(max<gifts[i])
             {
                 max = gifts[i];
             }
         }
         int p = sqrt(max);
         
         for(int i=0;i<gifts.size();i++)
         {
             if(gifts[i]==max)
             {
                 o = i;
             }
         }
         gifts.erase (gifts.begin() + o);
         
         gifts.push_back(p);
         
         
     }
        for(int i=0;i<gifts.size();i++)
        {
            sum = sum + gifts[i];
        }
        return sum;
    }
};
