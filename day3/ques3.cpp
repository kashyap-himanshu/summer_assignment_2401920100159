class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string k=s+s;
        return k.substr(1,k.length()-2).find(s)!=string::npos;
            
    }
};