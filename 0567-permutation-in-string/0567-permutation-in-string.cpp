class Solution {
private:
    bool checkequal(int count1[26], int count2[26]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        // character count 
        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i=0;
        int windows = s1.length();
        int count2[26]= {0};
        while(i<windows && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(checkequal(count1,count2)){
            return true;
        }

        while(i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;

            int index1 = s2[i-windows] - 'a';
            count2[index1]--;
            if(checkequal(count1,count2)){
                return true;
            }
            i++;
        }
        return false;
    }
};
