class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int sc = -1;
        if(n==1){
            return -1;
        }
        int lar= arr[n-1];
        for(int i = n-2;i>=0;i--){
            if (arr[i] < lar){
                sc = arr[i];
                return sc;
            }
        }
        return -1;
    }
};