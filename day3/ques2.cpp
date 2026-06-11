class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.empty()){
            return true;
        }
        if(s.length()>t.length()){
            return false;
        }
        while(j<t.length()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        if(i<=s.length()-1){
            return false;
        }
        return true;
        
    }
};