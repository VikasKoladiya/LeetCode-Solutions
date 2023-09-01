class Solution {
public:
    string convertToBase7(int num) {
        string ans="",temp="";
        if(!num){
            return "0";
        }
        if(num<0){
            num=-num;
            ans+='-';
        }
        while(num!=0){
            int rem = num%7;
            temp+=to_string(rem);
            num/=7;
        }
        reverse(temp.begin(),temp.end());
        return ans+temp;
    }
};