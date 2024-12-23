class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int index = 0,n=s.length();
        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=0;j<n;j++){
                if(goal[(i+j)%n]!=s[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
};