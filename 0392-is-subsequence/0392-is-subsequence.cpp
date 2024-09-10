class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0;
        for(int i=0;i<t.length();i++){
            if(s[c]==t[i]){
                c++;
            }
        }
        if(c==s.length()){
            return true;
        }
        return false;
    }
};