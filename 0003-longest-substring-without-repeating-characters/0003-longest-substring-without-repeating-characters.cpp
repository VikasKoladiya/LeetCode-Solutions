class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);
        int left = 0,right = 0,len = 0,maxlen = 0;
        int n = s.length();

        while(right<n){
            if(m[s[right]]!=-1){
                if(m[s[right]] >= left){
                    left = m[s[right]]+1;
                }
            }
            len = right-left+1;
            maxlen = max(len,maxlen);

            m[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};