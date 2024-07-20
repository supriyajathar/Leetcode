class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {

        int i=0;
        int j=0;
        int m=rowSum.size();
        int n=colSum.size();
         vector<vector<int>>vec(m,vector<int>(n,0));
         while(i< rowSum.size() && j<colSum.size())
         {
            vec[i][j]=min( rowSum[i],colSum[j]);
            rowSum[i]=rowSum[i]-vec[i][j];
            colSum[j]=colSum[j]-vec[i][j];
             if(rowSum[i]==0)
             {i++;}
            if(colSum[j]==0){ j++;}
           
           

         }
          return vec;

        
    }
};