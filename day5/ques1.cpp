class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> f;
        unordered_map<string,vector<string>> hima;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            string key=s;
            sort(key.begin(),key.end());
            hima[key].push_back(s);
        }
        for(auto value:hima){
            f.push_back(value.second);

        }
        return f;
        
    }
};