class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                count++;
                nums[i]=nums[i-1]+1;
            }
            if(nums[i-1]>nums[i])
            {
                int num=(nums[i-1]+1)-nums[i];
                count=count+num;
                nums[i]=nums[i-1]+1;

            }
            else
            {
                continue;
            }


        }
        return count;
        
    }
};