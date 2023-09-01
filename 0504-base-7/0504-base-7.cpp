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
        int n =num;
        while(n!=0){
            int rem = n%7;
            temp+=to_string(rem);
            n/=7;
        }
        reverse(temp.begin(),temp.end());
        return ans+temp;
    }
};