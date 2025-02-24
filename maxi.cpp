class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         if(nums.size()==1)
        {
            return nums[0];
        }
        long sum=0;
        long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};