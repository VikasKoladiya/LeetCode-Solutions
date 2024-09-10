class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int j=0,i=0;
        bool flag = true;
        while(i<word1.length() && j<word2.length()){
            if(flag){
                flag = false;
                ans+=word1[i++];
            }
            else{
                flag = true;
                ans+=word2[j++];
            }
        }
        if(i<word1.length()){
            ans += word1.substr(i,word1.length());
        }
        if(j<word2.length()){
            ans += word2.substr(j,word2.length());
        }
        return ans;
    }
};