class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int n = v.size(),index=0,maxi=-1,smax=-1;
        for(int i=0;i<v.size();i++){
            if(maxi<v[i]){
                smax = maxi;
                maxi = v[i];
                index = i;
            }
            else if(v[i]>smax){
                smax = v[i];
            }
        }
        if(maxi < smax*2){
            return -1;
        }
        return index;
    }
};