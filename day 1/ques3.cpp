class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<magazine.length();i++){
            arr1[magazine[i]-97]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            arr2[ransomNote[i]-97]++;

           
        }
        for(int i=0;i<ransomNote.length();i++){
            if(arr2[ransomNote[i]-97]<arr1[ransomNote[i]-97] || arr2[ransomNote[i]-97]==arr1[ransomNote[i]-97]){
                continue;
            }
            return false;
        }
        return true;

        

       
        
    }
};