class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int flag=0;
        int len=0;
        for(int i=0;i<s.length();i++){
            if(flag==0 && s[i]==' '){
                continue;
            }
            else if(s[i]!=' '){
                flag=1;
                len++;
            }
            if(flag==1 && s[i]==' '){
                break;
            }
        }
        return len;
    }
};