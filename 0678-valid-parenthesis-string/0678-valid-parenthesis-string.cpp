class Solution {
public:
    bool checkValidString(string s) {
        
         int balance = 0;
        int star = 0;

        // First pass: left to right
        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                if (balance > 0)
                    balance--;
                else if (star > 0)
                    star--; // use a star as '('
                else
                    return false;
            } else {
                star++; // count * as potential '('
            }
        }
       

        // Second pass: right to left
        balance = 0;
        star = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')') {
                balance++;
            } else if (s[i] == '(') {
                if (balance > 0)
                    balance--;
                else if (star > 0)
                    star--; // use a star as ')'
                else
                    return false;
            } else {
                star++; // count * as potential ')'
            }
        }
        return true;
    }
};