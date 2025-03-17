class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count = 0;
        if(s.length() != goal.length()){
            return false;
        }
        
        if(s == goal){
            vector<int> freq(26);
            for(auto c: s){
                freq[c - 'a']++;
                if(freq[c- 'a']>1){
                    return true;
                }
            }
            return false;
        }

        vector<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                ans.push_back(i);
            }

            if(ans.size()>2){
                return false;
            }
        }

        return (ans.size()==2 && s[ans[0]]==goal[ans[1]] && s[ans[1]] == goal[ans[0]]);
    }
};