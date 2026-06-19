class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> hima(temperatures.size());
        stack<int> s;
        int n=temperatures.size()-1;
        s.push(n);
        hima[n]=0;
        for(int i=n-1;i>=0;i--){
            while( !s.empty() && temperatures[s.top()]<=temperatures[i]){
                s.pop();
            }
            if(!s.empty()){
                hima[i]=s.top()-i;
                s.push(i);
            }else{
                hima[i]=0;
                s.push(i);
            }
        }
        return hima;

    }
};