class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> m;
        char ch = 'a';
        for(int i=0;i<key.length();i++){
            if((!m[key[i]]) && key[i]!=' '){
                m[key[i]]=ch;
                ch++;
            }
        }
        for(int i=0;i<message.length();i++){
            if(message[i]!=' ')
                message[i] = m[message[i]];
        }
        return message;
    }
};