class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()){
            return {};

        }
      
        int low=0;
        int high=p.length();
        int arr1[26]={0};
        vector<int> hima;
        for(int i=0;i<p.length();i++){
            arr1[p[i]-97]++;
            
        }
        int j=0;
      while(j<=s.length()-p.length()){
        int arr2[26]={0};
        int flag=0;
        
        for(int i=j;i<j+p.length();i++){
            arr2[s[i]-97]++;
        }  
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                flag=1;
                break;
            }

        } if(flag==0){
            hima.push_back(j);

        }
        j++;
     }
        return hima;

    }
};