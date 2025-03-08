class Solution {
public:
    int numberOfSpecialChars(string s) {
        int count = 0;
        map<char,int> m;
        map<char,int> m1;
        map<char,bool> m2;
        for(int i=0;i<s.length();i++){
            if(islower(s[i])){
                m[s[i]]=i;
            }
            else{
                if(m1.find(s[i]) == m1.end()){
                    m1[s[i]]=i;
                    m2[s[i]]=true;
                }
            }
        }
        for(int i=0;i<s.length();i++){
            if(m.find(tolower(s[i])) != m.end() && isupper(s[i])){
                if((m[tolower(s[i])]<m1[s[i]]) && isupper(s[i]) && m2[s[i]]){
                    count++;
                    cout<<s[i];
                    m2[s[i]]=false;
                }
            } 
        }
        return count;
    }
};