class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int i=0;

        if(n==1)
        {
            return nums[0];
        }
        while(i<n)
        {
            ans=ans^nums[i];
            i++;

        }
        return ans;
   
        
    }
};