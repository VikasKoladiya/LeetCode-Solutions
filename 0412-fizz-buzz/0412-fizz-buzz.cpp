class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // 1.
        // vector<string> ans;
        // for(int i=1;i<=n;i++){
        //     if(i%3==0 && i%5==0){
        //         ans.push_back("FizzBuzz");
        //     }
        //     else if(i%3==0){
        //         ans.push_back("Fizz");
        //     }
        //     else if(i%5==0){
        //         ans.push_back("Buzz");
        //     }
        //     else{
        //         ans.push_back(to_string(i));
        //     }
        // }
        // return ans;

        // 2.
        if( n == 1 ){
            return {"1"};
        }
        if( n == 2 ){
            return {"1","2"};
        }
        vector<string> ans(n);
        ans[0] = "1";
        ans[1] = "2";
        int i = 3;
        while( i <= n ){
            int chia3 = i%3;
            int chia5 = i%5;
            if( chia3 == 0 && chia5 == 0 ){
                ans[i-1] = "FizzBuzz";
            }
            else if( chia3 == 0 && chia5 != 0 ){
                ans[i-1] = "Fizz";
            }
            else if( chia3 != 0 && chia5 == 0 ){
                ans[i-1] = "Buzz";
            }
            else {
                ans[i-1] = to_string(i);
            }
            i++;
        }
        return ans; 
    }
};