class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n=heights.size();
        vector<int> right(n);
        vector<int> left(n);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(s.empty()){
                right[i]=n;
                s.push(i);
                continue;
            }
           
            right[i]=s.top();
             s.push(i);

        }
        while(!s.empty()){
            s.pop();
        }
          for(int i=0;i<n;i++){
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(s.empty()){
                left[i]=-1;
                s.push(i);
                continue;
            }
         
            left[i]=s.top();
             s.push(i);

        }

        int area;
        int maxarea=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            area=heights[i]*(width);
            maxarea=max(area,maxarea);
        }
        return maxarea;

        
    }
};