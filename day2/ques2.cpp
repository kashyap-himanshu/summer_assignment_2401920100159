class Solution {
public:
    bool issame(int freq[],int freq1[]){
        for(int i=0;i<26;i++){
            if(freq[i] != freq1[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int freq[26]={0};
        int freq1[26]={0};
        for(int i=0;i<s1.length();i++){
            int idx=s1[i]-'a';
            freq[idx]=freq[idx]+1;
        }
        int low=0;high=s1.length();
        string sliding={}
        for( int i=low;i<s1.length();i++){
            sliding=sliding+s2[i];    
        }
        while(high<s2.length()){
            
            if(issame(freq))
        }
        
    }
};