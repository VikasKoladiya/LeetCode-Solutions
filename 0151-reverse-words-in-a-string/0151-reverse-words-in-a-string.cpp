class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string ans = "";
        stack<string> st;
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
            if(temp!=""){
                st.push(temp);
                temp="";
            }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(st.size()!=0){
                ans+=" ";
            }
        }
        return ans;
    }
};