class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> hima;
        unordered_map<int,int> f;
        for(int i=nums2.size()-1;i>=0;i--){
            if(hima.empty() ){
                hima.push(nums2[i]);
                f[nums2[i]]=-1;
                continue;
            }
            while( !hima.empty() && hima.top()<=nums2[i]){
                hima.pop();
            }
            if(!hima.empty()){
                f[nums2[i]]=hima.top();
                hima.push(nums2[i]);
            }else{
                f[nums2[i]]=-1;
                hima.push(nums2[i]);
            }

        }
        for(int i=0;i<nums1.size();i++){
            int k=nums1[i];
            nums1[i]=f[k];
        }
        return nums1;
        

        
        
        
    }
};