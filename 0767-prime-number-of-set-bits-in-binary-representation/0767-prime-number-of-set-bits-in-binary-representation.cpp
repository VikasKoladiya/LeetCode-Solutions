class Solution {
private:
    bool isprime(int n){
        int count=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==1){
            return true;
        }
        else{
            return false;
        }
    }
public:
    int countPrimeSetBits(int left, int right) {
        int count1,prime=0;
        for(int i=left;i<=right;i++){
            int j=i;
            count1=0;
            while(j){
                if(j&1){
                    count1++;
                }
                j/=2;
            }
            if(isprime(count1)){
                prime++;
            }
        }
        return prime;
    }
};