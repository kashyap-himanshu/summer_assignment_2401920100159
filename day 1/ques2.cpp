class Solution {
public:
    int firstUniqChar(string s) {
        int arr1[26]={0};
        for(int i=0;i<s.length();i++){
            arr1[s[i]-97]++;

        }
        for(int i=0;i<s.length();i++){
            if(arr1[s[i]-97]==1){
                return i;
            }
        }
        return -1;
      

        
    }
};