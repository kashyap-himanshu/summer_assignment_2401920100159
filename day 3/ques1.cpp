class Solution {
public:
    bool isValid(string s) {
        stack<char> hima;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                hima.push(s[i]);
            }
            if(hima.empty() && (s[i]==')' || s[i]=='}' || s[i]==']')){
                return false;
            }
            if(s[i]==')' && hima.top()=='('){
                hima.pop();
            }else if(s[i]==')' && hima.top()!='('){
                return false;
            }
            if(s[i]=='}' && hima.top()=='{'){
                hima.pop();
            }else if(s[i]=='}' && hima.top()!='{'){
                return false;
            }
            if(s[i]==']' && hima.top()=='['){
                hima.pop();
            }else if(s[i]==']' && hima.top()!='['){
                return false;
            }
            
        }
        if(!hima.empty()){
            return false;
        }else{
            return true;
        }
        
    }
};