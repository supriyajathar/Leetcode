// class Solution {
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         int min=INT_MAX;
//         int max=INT_MIN;
//          vector<int>arr1;
//             vector<int>arr2;
//              vector<int>ans;
//              unordered_map<int,int>mp;

//         for(int i=0;i<matrix.size();i++ )
//         {
//             for(int j=0;j<matrix[0].size();j++)
//             {
//                 if(arr[i][j]<min)
//                 {
//                     min=matrix[i][j];
                    
//                 }
//             }
//            arr1.push_back(min);
//         }

//           for(int i=0;i<matrix[0].size();i++ )
//         {
//             for(int j=0;j<matrix.size();j++)
//             {
//                 if(arr[i][j]>min)
//                 {
//                     max=matrix[i][j];
                    
//                 }
//             }
//            arr1.push_back(max);
//         }
//         for(int i=0)

       
        
//     }
// };

class Solution {
public:
    bool check(vector<vector<int>>& matrix, int row, int col, int p) {
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][col] > p) {
                return false;
            }
        }
        return true;
    }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> answer;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            int p = INT_MAX;
            int t;
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < p) {
                    t = j;
                    p = matrix[i][j];
                }
            }
            if (check(matrix, i, t, p) == true) {
                answer.push_back(p);
            }
        }
        return answer;
    }
};