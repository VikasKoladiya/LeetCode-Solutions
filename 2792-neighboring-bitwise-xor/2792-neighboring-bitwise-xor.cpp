class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
       char ls = 'x';
       if(d.size() <= 1){
        if(d[0]==0) return true;
        return false;
       }
       char fs = (d[d.size()-1] == 1)?'y':'x';
       for(int i=0; i<d.size()-1; i++){
            if(d[i]==1){
                fs = (fs=='x')?'y':'x';
            }
       }
       if(fs==ls) return true;
       return false;

    }
};