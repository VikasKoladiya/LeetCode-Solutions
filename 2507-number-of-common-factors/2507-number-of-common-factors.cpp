class Solution {
public:
    int commonFactors(int a, int b) {
       int count;
       for(int i=1;i<=1000;i++){
            if(i>max(a,b)){
                break;
            }
            if(a%i==0 && b%i==0){
                count++;
            }
       }
       return count;
    }
};