class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>rv(r,0);
        vector<int>cv(c,0);
        for(int i = 0 ;i<r;i++){
            for(int j = 0 ;j<c;j++){
                if(matrix[i][j]==0){
                    rv[i]=1;
                    cv[j]=1;
                }
            }
        }

        for(int i = 0 ;i<r;i++){
            for(int j = 0 ;j<c;j++){
                if((rv[i]==1) || (cv[j]==1))
                {
                    matrix[i][j]=0;
                }
            }
        }
        // int m=matrix.size();
        // int n=matrix[0].size();
        // vector<int>row(m,0);
        // vector<int>col(n,0);
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             row[i]=1;
        //             col[j]=1;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
            
        //         if(row[i]==1){
        //           for(int j=0;j<n;j++){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        //  for(int i=0;i<n;i++){
            
        //         if(col[i]==1){
        //           for(int j=0;j<m;j++){
        //             matrix[j][i]=0;
        //         }
        //     }
        // }
        
    }
};