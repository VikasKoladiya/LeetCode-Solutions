class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int vowel = 0,constant=0;
        if(s.length()<3){
            return false;
        }
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    vowel++;
                }
                else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                    constant++;
                }
            }
            else return false;
        }
        if(vowel>=1 && constant>=1){
            return true;
        }
        return false;
    }
};