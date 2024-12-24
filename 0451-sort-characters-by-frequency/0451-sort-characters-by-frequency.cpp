class Solution {
public:
    static bool customComparator(pair<char,int> &a,pair<char,int> &b){
        return a.second > b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int> m;
        map<int,char> m2;
        string ans  = "";
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        // copy all the key-value pair to the vector
        vector<pair<char,int>> vec(m.begin(),m.end());

        sort(vec.begin(),vec.end(),customComparator);

        for(auto pair:vec){
            for(int i=0;i<pair.second;i++){
                ans+=pair.first;
            }
        }
        return ans;
    }
};