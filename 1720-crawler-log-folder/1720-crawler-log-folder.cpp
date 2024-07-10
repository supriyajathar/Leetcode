class Solution {
public:
    int minOperations(vector<string>& logs) {
        // int depth=0;
        // for(int i=0;i<logs.size();i++)
        // {
        //     string str=logs[i];
        //     if(str!="../" && str!="./")
        //     {
        //         depth++;
        //     }
        //    else if(str=="../" && depth!=0)
        //    {
        //     depth--;
        //    }
        //    else
        //    {
        //     continue;
        //    }
        // }
        // return depth;
        int count=0;
        stack<string>st;
        for(int i=0;i<logs.size();i++)
        {
            string str=logs[i];
            if(str=="../" )
            {
                if(!st.empty())
                {
 st.pop();
                }
               
            }
            else if(str=="./")
            {
                continue;
            }
            else
            {
                st.push(str);
            }
        }
      while(!st.empty())
      {
        string s=st.top();
        count++;
        st.pop();
      }


return count;
        
    }
};