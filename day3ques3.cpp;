class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxarea=INT_MIN;
        while(i<j){
            int m=height[i];
            int n=height[j];
            int area;
            if(m<n){
                area=m*(j-i);
                i++;
            }else if(m>n){
                area=n*(j-i);
                j--;
            }else{
                area=m*(j-i);
                i++;
                j--;
            }
            maxarea=max(maxarea,area);

        }
        return maxarea;
        
    }
};