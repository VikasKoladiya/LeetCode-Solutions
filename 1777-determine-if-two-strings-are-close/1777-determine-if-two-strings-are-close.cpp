class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()){
            return false;
        }
        // map<char,int> w1,w2;
        vector<int> v1(26);
        vector<int> v2(26);
        for(int i=0;i<word1.length();i++){
            // w1[word1[i]]++;
            v1[word1[i] - 'a']++;
            // w2[word2[i]]++;
            v2[word2[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i] && !v2[i]){
                return false;
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1 == v2;
    }
};