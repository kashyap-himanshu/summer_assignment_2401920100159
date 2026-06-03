class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int i=0;
         int j=nums.size()-1;
         vector<int>ans;
         while(i<j){
            if(abs(nums[i])<abs(nums[j])){
                j--;
                
            }
            if(abs(nums[i])>abs(nums[j])){
                swap(nums[i],nums[j]);
                 
                
            
            }
         }
         for(int i:nums){
            ans.push_back(i*i);
         }
         return ans;

       
        
    }
};