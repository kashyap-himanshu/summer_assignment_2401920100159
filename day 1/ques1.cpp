class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[26]={0};
        int arr2[26]={0};
        if(s.length()!=t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            arr1[s[i]-97]++;
            arr2[t[i]-97]++;
        }

        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;

        
    }
};