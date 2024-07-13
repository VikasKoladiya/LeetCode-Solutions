class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        map<char,int> ind;
        int ans = INT_MAX;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            ind[s[i]]=i;
        }
        for(auto p:m){
            if(p.second==1){
                if(ind[p.first]<ans){
                    ans = ind[p.first];
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};