class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0;
        int j=i+2;
        while(j<arr.size())
        {
            if(arr[i] & 1==1 && arr[i+1] & 1==1 && arr[j] & 1==1)
            {
                return true;
            }
            else
            {
                i++;
                j++;
            }
        }
        return false;
        
    }
};