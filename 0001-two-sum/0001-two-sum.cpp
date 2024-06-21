class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //first solution 0(n^2)
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //                ans.push_back(i);
        //                ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        //second approach o(n)
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int isans=target-nums[i];
            if(mp.find(isans)!=mp.end())
            {
                ans.push_back(mp[isans]);
                  ans.push_back(i);
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return ans;


        
    }
};