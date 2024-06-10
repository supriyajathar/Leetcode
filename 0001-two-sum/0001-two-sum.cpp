
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
   
    
    vector<int>ans;
    unordered_map<int ,int>mp;
   for(int i=0;i<nums.size();i++)
   {
    int second_num=target-nums[i];
    if(mp.find(second_num)!=mp.end())
    {
        ans.push_back(i);
        ans.push_back(mp[second_num]);
        break;
    }
    mp[nums[i]]=i;
   }
return ans;
//    unordered_map<int,int>mp;
//    vector<int>ans;
// int i=0;
// int j=1;
// int n=nums.size();
//    for(int i=0;i<nums.size();i++)
//    {
// //     pair<int,int>p;
// //  p.first=nums[i];
// //  p.second=i;


// //         //   pair<nums[i],i>p;
// //        mp.insert(p);
// mp[nums[i]]=i;
//    }
//    sort(nums.begin(),nums.end());
// while(j<n)
// {
//     if(nums[i]+nums[j]==target)
//     {
//         mp.find(nums[i]!=mp.end())
//         {
//             ans.push_back(mp[nums[i]]);
            
//         }
//         mp.find(nums[j]!=mp.end())
//         {
//             ans.push_back(mp[nums[j]]);
            
//         }
//     }
//     if(nums[i]+nums[j]<target)
//     {
//         i++;
//         j++;

//     }
// }
    
//     return ans;
    }
};