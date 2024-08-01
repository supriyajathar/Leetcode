class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            string s=details[i];
            int m=s.size();
            int z=0;
            z=z*10+(s[m-4]-'0');
              z=z*10+(s[m-3]-'0');
              if(z>60)
              {
                count++;
              }
        }
        
        return count;
    }
};