class Solution {
public:
    int reverse(int x) {
        int rem = 0 , rev=0;
        while(x!=0){
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rem = x%10;
            rev = (rev*10) + rem;
            x /= 10;
        }
        return rev;
    }
};