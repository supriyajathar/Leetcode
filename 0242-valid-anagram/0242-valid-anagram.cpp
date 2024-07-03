class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1=s.size();
        int size2=t.size();
        if(size1!=size2)
        {
            return false;
        }
        sort(s.begin(),s.end());
           sort(t.begin(),t.end());
           if(s.compare(t)==0)
           {
            return true;
           }
           else
           {
            return false;
           }

        
    }
};