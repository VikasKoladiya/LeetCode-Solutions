class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s1(26);
        vector<int> t1(26);
        for(int i=0;i<s.length();i++){
            s1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            t1[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(s1[i]!=t1[i]){
                return false;
            }
        }
        return true;
    }
};