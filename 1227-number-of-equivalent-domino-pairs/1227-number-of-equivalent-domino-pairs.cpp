class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<pair<int,int>,int> m;
        int count = 0;
        for(auto &p:d){
            if(p[0] > p[1]) swap(p[0],p[1]);
            count += m[{p[0],p[1]}]++;
        }
        return count;
    }
};