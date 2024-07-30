class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ransom;
        map<char,int> magazie;
        for(int i=0;i<ransomNote.length();i++){
            ransom[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++){
            magazie[magazine[i]]++;
        }
        for(auto p:ransom){
            if(magazie[p.first]<p.second){
                return false;
            }
        }
        return true;
    }
};