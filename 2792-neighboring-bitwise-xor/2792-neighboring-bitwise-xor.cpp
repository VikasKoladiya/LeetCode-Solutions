class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
       int  n = derived.size();
       int checkele = 0; 
       for(int i=0;i<n;i++){
            checkele ^= derived[i];
       }
        return checkele == 0;
    }
};