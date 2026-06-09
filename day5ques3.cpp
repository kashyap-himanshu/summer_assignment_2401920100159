class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string s="";
        s=s+strs[i];
        i=1;
        int res1=INT_MAX;
        if(strs.size()<2){
            return s;
        }
        while(i<strs.size()){
            string k="";
            k=k+strs[i];
            int j=0;
            int m=0;
            int res=0;
            while(m<s.length() && j<k.length()){
                if(s[m]==k[j]){
                    j++;
                    m++;
                    res++;
                }else{
                    break;
                }
            }
            res1=min(res,res1);
            i++;
        }

     return s.substr(0,res1);
       
            


        
    }
};