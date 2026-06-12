class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            string word=" ";
            while(s[i]!=' '  && i<s.length()){
                word=word+s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            ans=ans+word;
        }
        return ans.substr(0,s.length());
        
    }
};