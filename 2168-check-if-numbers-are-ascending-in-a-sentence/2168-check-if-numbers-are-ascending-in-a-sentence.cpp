class Solution {
public:
    bool areNumbersAscending(string s) {
        s+=' ';
        vector<int> v;
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                if(temp[0]>='0' && temp[0]<='9') v.push_back(stoi(temp));
                temp = "";
            }
        }
        for(int i=1; i<v.size(); i++){
            if(v[i]<=v[i-1]) return false;
        }
        return true;

    }
};