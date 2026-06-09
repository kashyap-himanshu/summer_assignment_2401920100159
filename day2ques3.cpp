class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN;
        double avg;
        double sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];     
        }
        avg=sum/k;
        maxi=max(avg,maxi);

        int high=k-1;
        int low=0;
        while(high<nums.size()){
            sum=sum-nums[low];
            low++;
            high++;
            if(high<nums.size()){
                sum=sum+nums[high];
                avg=sum/k;
                maxi=max(avg,maxi);
            }
        }
        return maxi;
        
    }
};