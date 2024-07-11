class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        unordered_map<char,char> memo;
        unordered_map<char, bool> vis;

        for(int i=0;i<n;i++){
            if(memo[t[i]]){
                if(memo[t[i]] != s[i]) return false;
            }
            else{
                if(vis[s[i]]) return false;
                memo[t[i]]=s[i];
                vis[s[i]]=true;
            }
        }
        return true;
    }
};