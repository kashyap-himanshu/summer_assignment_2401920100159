class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size() && i<nums.size()){
            if(nums[i]==0){
                if(j<nums.size() && nums[j]==0 ){
                    j++;
                    continue;
                }
                swap(nums[i],nums[j]);
                j++;
            }
            if(i<j && nums[i]!=0){
                i++;
                
            }else if(i>=j && nums[i]!=0){
                i++;
                j++;
            }
            

        }
        
    }
};