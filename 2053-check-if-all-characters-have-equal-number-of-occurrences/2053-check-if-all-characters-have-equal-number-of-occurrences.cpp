class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        auto it = m.begin();
        int occ = it->second;
        it++;
        while(it != m.end()){
            if(it->second!=occ){
                return false;
            }
            it++;
        }
        return true;
    }
};