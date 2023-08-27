class Solution {
public:
    string toHex(long num) {
        string ans;
        if(num < 0){
            num += 4294967296;
        }
        if(num == 0){
            ans.push_back('0');
        }
        while(num!=0){
            int x = num%16;
            switch(x){
                case 10:
                        ans.push_back('a');
                        break;
                    case 11:
                        ans.push_back('b');
                        break;
                    case 12:
                        ans.push_back('c');
                        break;
                    case 13:
                        ans.push_back('d');
                        break;
                    case 14:
                        ans.push_back('e');
                        break;
                    case 15:
                        ans.push_back('f');
                        break;
                    default:
                        ans.push_back(x + 48);
            }
            num/=16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};