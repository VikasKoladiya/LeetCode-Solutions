class Solution {
public:
    int digits(int n){
        int count = 0;
        while(n>0){
            n/=2;
            count++;
        }
        cout<<count<<endl;
        return count;
    }
    int findComplement(int num) {
        int n = (int)(pow(2,digits(num))-1);
        return n-num;;
    }
};