class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,int>> items;
        
        int n = val.size();
        
        for(int i = 0 ; i < n ;i++){
            double ratio = ( double)val[i]/wt[i];
            items.push_back({ratio,i});
        }
        
        sort(items.begin(),items.end(),greater<pair<double,int>>());
        double ans = 0.0 ;
        
        for( auto it : items){
            int index = it.second;
            if(capacity >= wt[index] ){
                ans+=val[index];
                capacity-=wt[index];
            }
            else{
                ans += ((double) capacity / wt[index])*val[index];
                break;
            }
            
            
            
        }
        return ans;
    }
};
