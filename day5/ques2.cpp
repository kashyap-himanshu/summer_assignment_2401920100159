class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int i=0;
        while(i<chars.size()){
            
            
             
            char ch=chars[i];
            int count=0;
            while(i<chars.size() && ch==chars[i]){
                count++;
                i++;
            }
        
                chars[idx]=ch;
                idx++;
                
                

            
                if(count>1){
                string s=to_string(count);
                for(char j:s){
                    
                    chars[idx]=j;
                    idx++;
                    
                }
            }
            
        }
       
       return idx;

      

      
           
        
    }
};