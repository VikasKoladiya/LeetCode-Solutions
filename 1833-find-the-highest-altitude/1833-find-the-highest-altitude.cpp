class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0,c=0;
        for(int i=0;i<gain.size();i++){
            c+=gain[i];
            ans = max(ans,c);
        }
        return ans;
    }
};