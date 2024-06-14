class Solution {
public:
    int reverse(int x) {
        long int num = x;
        long int rev=0,reminder=0;
        
        while(num!=0){
            if(rev>INT_MAX/10|| rev<INT_MIN/10){
            return 0;
        }
            reminder = num % 10;
            rev = (rev*10) + reminder;
            num /= 10;
        }
        return rev;
    }
};