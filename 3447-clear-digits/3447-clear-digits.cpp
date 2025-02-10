class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i]) && !st.empty()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return "";
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};