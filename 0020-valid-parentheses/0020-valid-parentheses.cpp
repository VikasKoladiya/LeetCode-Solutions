class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty()){
                    return false;
                }
                char chare = st.top();
                if((chare=='(' && s[i]!=')') || (chare=='{' && s[i]!='}') || (chare=='[' && s[i]!=']')){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty())
            return true;
        else{
            return false;
        }
    }
};