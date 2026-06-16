class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        int n = s.size();
        vector<vector<int>>meetings;
        vector<int> ans;
        
        for(int i = 0 ; i<n ; i++){
            meetings.push_back({f[i],s[i],i+1});
        }
        sort(meetings.begin(),meetings.end());
        int lastend = -1;
        for(auto i : meetings){
            int end = i[0];
            int start = i[1];
            int index = i[2];
            if(start > lastend){
                ans.push_back(index);
                lastend = end;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};