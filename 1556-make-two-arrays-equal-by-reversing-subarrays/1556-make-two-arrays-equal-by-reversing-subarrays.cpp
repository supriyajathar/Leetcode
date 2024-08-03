class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> cnt1(1001);
        vector<int> cnt2(1001);
        for (int& v : target) {
            ++cnt1[v];
        }
        for (int& v : arr) {
            ++cnt2[v];
        }
        return cnt1 == cnt2;
        // unordered_map<int,bool>mp;
        // for(int i=0;i<target.size();i++)
        // {
        //     mp[target[i]]=true;
        // }
        // for(int j=0;j<arr.size();j++)
        // {
        //     if(mp[arr[j]]==true)
        //     {
        //         mp[arr[j]]=false;
        //         continue;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
        // return true;
       
    }
};