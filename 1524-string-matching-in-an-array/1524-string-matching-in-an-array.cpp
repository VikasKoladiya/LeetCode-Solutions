class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            for(int j=0;j<words.size();j++){
                if(words[j].contains(temp) && words[j]!=temp && (find(ans.begin(), ans.end(), temp) == ans.end())){
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};