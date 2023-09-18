class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0;
        for(char c : columnTitle){
            
            int value = c - 'A' + 1;
            answer = answer * 26 + value;
        }
        return answer;
    }
};