class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<string> v;
        map<int,string> m;
        for(int i=0;i<n;i++){
            m[heights[i]]=names[i];
        }
        for(auto p:m){
            v.push_back(p.second);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};