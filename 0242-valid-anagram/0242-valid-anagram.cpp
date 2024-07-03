class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1=s.size();
        int size2=t.size();
        if(size1!=size2)
        {
            return false;
        }
        // sort(s.begin(),s.end());
        //    sort(t.begin(),t.end());
        //    if(s.compare(t)==0)
        //    {
        //     return true;
        //    }
        //    else
        //    {
        //     return false;
        //    }
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            char ch =s[i];
            mp[ch]++;
        }
        for(int j=0;j<t.size();j++)
        {
            char ch =t[j];
            if(mp.find(ch)!=mp.end() && mp[ch]!=0)
            {
                mp[ch]--;
                continue;
            }

            else
            {
                return false;
            }
         
        }
        return true;


        
    }
};