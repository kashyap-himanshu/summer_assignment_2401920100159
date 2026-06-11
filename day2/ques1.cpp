class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result=0;
        int high=0,low=0;
        unordered_map<char,int> f;
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            while(f[s[high]]>1){
                f[s[low]]--;
                if(f[s[low]==0]){
                    f.erase(s[low]);
                }
                low++;
            }
            if(f[s[high]]==1){
                result=max(result,high-low+1);
            }
        }
        return result;
        
    }
};