// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         int n=g.size();
//         int m=s.size();
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int l=0,r=0;
//         while(l<m){
//             if(r!=n && g[r]<=s[l]){
//                 r++;
//             }
//             l++;
//         }
//         return r;
        
//     }
// };

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         int count =0;
    int i=0,j=0;
    sort(begin(g),end(g));
    sort(begin(s),end(s));
         while(i<g.size() && j<s.size())
         {
            if(s[j] >= g[i])
            {
              count++;
              i++;
              j++;
            }
            else
            j++;
         }
         return count;
    }
};