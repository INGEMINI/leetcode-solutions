class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>ans;
        int n=numRows;
        for(int i=1;i<=n;i++){
            vector<int>v(i);
            for(int j=1;j<=i;j++){
               
                if((j==1) || (j==i)){
                    v[j-1]=1;
                }
                else{
                   v[j-1]= ans[i-2][j-1] + ans[i-2][j-2];
                }

            }
            ans.push_back(v);

        }
        return ans;

    }    
    
};