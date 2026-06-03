

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        // int set = 0;
        // vector<int>v;
        // for(int i = 0 ;i<arr.size();i++){
        //     set =1;
        //     if(i==(arr.size()-1)){
        //         v.push_back(arr[i]);
        //         return v;
        //     }
        //     for( int j = i+1 ; j<arr.size() ;j++){
        //         if(arr[i]<arr[j]){
        //             set = 0;
        //         }
        //     }
        //     if (set==1){
        //     v.push_back(arr[i]);
        //     }
            
        // }
        // return v;
        
        vector<int>v;
        int maxele = INT_MIN;
        int n = arr.size();
        for(int i = n-1 ; i>=0;i--){
            if(arr[i]>=maxele){
                v.push_back(arr[i]);
            }
            maxele = max(maxele , arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};