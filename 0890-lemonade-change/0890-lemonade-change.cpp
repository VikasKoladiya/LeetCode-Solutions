class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> m;
        int n = bills.size();
        for(int i=0;i<n;i++){
            m[bills[i]]++;
            if(bills[i]==10){
                if(m[5]>0){
                    m[5]--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                if(m[5]>0 && m[10]>0){
                    m[5]--;
                    m[10]--;
                }
                else if(m[5]>2){
                    m[5]-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};