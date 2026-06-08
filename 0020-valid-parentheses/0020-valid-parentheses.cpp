class Solution {
public:
    bool isValid(string st) {
        stack<char>s;
        for (char ch : st){
            if(ch=='(' || ch=='[' || ch=='{'){
                s.push(ch);
            }
            else{
                if(s.empty()){
                    return false;
                }
                if((ch==')' && s.top() != '(') || (ch==']' && s.top() != '[') || (ch=='}' && s.top() != '{')){
                    return false;
                }
                s.pop();
            }

        }
        if(s.empty()){
            return true;
        }
        return false;
        
    }
};