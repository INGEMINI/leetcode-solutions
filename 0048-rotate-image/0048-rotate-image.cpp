class Solution {
public:
      vector<vector<int>>  rotate(vector<vector<int>>& matrix) {
        int temp = -1;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i = 0 ;i<r;i++){
            for(int j = i+1 ;j<c;j++){
                temp = matrix[j][i];
               matrix[j][i]=matrix[i][j];
               matrix[i][j]=temp; 
            }
        }
        for(int i = 0 ;i<r;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return matrix;
    //     int n=matrix.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=1+i;j<n;j++){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //         reverse(matrix[i].begin(),matrix[i].end());
            
    //     }
    //    return matrix;
        
    }
};