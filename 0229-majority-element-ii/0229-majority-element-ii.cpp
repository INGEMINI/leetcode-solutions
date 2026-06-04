class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        vector<int>v;
        map<int,int>mp;
        for(int i = 0 ; i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it :  mp ){
            if(it.second >m){
                v.push_back(it.first);
            }
        }
        return v;
        
    }
};