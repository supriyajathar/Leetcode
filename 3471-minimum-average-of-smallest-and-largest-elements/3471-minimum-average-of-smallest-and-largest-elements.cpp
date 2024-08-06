class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<double>avarage;
        int i=0;
        int j=n-1;
      while(i<j)
        {
            double  m=(nums[i]+nums[j])/2.0;
           avarage.push_back(m);

           i++;
           j--;

        }
        sort( avarage.begin(), avarage.end());
        return   avarage[0];
        
    }
};