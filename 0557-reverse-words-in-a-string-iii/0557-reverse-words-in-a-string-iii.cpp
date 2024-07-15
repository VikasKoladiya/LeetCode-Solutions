class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string ans = "";
        string temp = "";
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans+=temp;
                if(i!=n-1){
                    ans+=' ';
                }
                temp="";
            }
        } 
        return ans;
    }
};