class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxele=INT_MIN;

        for(int i = 0;i<n-1;i++){
            maxele=-1;
            for(int j = i+1;j<n;j++){
               maxele = max(maxele,arr[j]);
            }
            
            arr[i]=maxele;
            

        }
        arr[n-1]=-1;
        return arr;
        
    }
};