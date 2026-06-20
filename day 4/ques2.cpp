class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        int ans=INT_MIN;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                s.push(stoi(tokens[i]));
            }else{
                int k,j;
                k=s.top();
                s.pop();
                j=s.top();
                s.pop();
                 if(tokens[i] == "+"){
                ans=j+k;
                s.push(ans);
            }
             if(tokens[i] == "-"){
                ans=j-k;
                s.push(ans);
            }
             if(tokens[i] == "*"){
                ans=j*k;
                s.push(ans);
            }
             if(tokens[i] == "/"){
                ans=j/k;
                s.push(ans);
            }
           
           
                
            }
        }
        if(ans==INT_MIN){
            return s.top();
        }
        return ans;
        
    }
};