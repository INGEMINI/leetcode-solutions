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
    
    }
};