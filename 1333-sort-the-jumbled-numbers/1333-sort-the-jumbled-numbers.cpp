// class Solution {
// public:
//     vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
//                 unordered_map<int ,int>mp;
//                    unordered_map<int ,int>m;
//                 vector<int>ans;
//                 for(int i=0;i<mapping.size();i++)
//                 {
//                     mp[i]=mapping[i];
//                 }

//                 for(int i=0;i<nums.size();i++)
//                 {
//                     string s=to_string(nums[i]);
//                     int  k;
//                     for(int i=0;i<s.size();i++)
//                     {
//                         s[i]=mp[s[i]];
//                       k   = stoi(s[i]);

                   
//                      ans.push_back(k);

//                     }
                    

//                 }
//                 for(int i=0;i<ans.size();i++)
//                 {
//                     m[i]=ans[i];
//                 }
//                 sort(ans.begin(),ans.end());
//                 for(int i=0;i<ans.size();i++)
//                 {
                    
//                          mapping[i]=ans[i];
//                 }
//           return mapping;

              


        
//     }
// };




#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        vector<pair<int, int>> mapped_nums;

        // Create the mapping for digits
        for (int i = 0; i < mapping.size(); i++) {
            mp[i] = mapping[i];
        }

        // Apply the mapping to each number and store the mapped value along with the original index
        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            string mapped_str = "";
            
            // Map each digit according to the mapping
            for (char c : s) {
                mapped_str += to_string(mp[c - '0']);
            }
            
            // Convert the mapped string back to an integer
            int mapped_num = stoi(mapped_str);
            
            // Store the mapped number along with its original index
            mapped_nums.emplace_back(mapped_num, i);
        }

        // Sort based on the mapped number
        sort(mapped_nums.begin(), mapped_nums.end());

        // Reconstruct the output based on sorted indices
        vector<int> result(nums.size());
        for (int i = 0; i < mapped_nums.size(); i++) {
            result[i] = nums[mapped_nums[i].second];
        }

        return result;
    }
};
