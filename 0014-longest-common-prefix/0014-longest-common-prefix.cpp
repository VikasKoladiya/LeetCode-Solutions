class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int z=0,count=0;
        bool flag = false;
        string ans = "";
        for(int i=0;i<strs[0].length();i++){
            char ch = strs[0][i];
            count = 0;
            for(int j=1;j<n;j++){
                if(z<=i){
                    if(ch == strs[j][z]){
                        count++;
                    }
                    else{
                        flag = true;
                    }
                }
                else{
                    flag = true;
                }
            }
            if(count==n-1){
                ans+=strs[0][i];
            }
            if(flag){
                break;
            }
            z++;
        }
        return ans;
    }
};