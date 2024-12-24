class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                int st_size = st.size();
                ans = max(ans,st_size);
            }
            else if(s[i]==')'){
                st.pop();
            }
        }
        return ans;
    }
};