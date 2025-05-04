class Solution {
public:

    long long int solve(vector<int> nums,int n){
    long long int prev2 = 0;
    long long int prev1 = nums[0];

    for(int i=1;i<n;i++){
        long long int inc = prev2 + nums[i];
        long long int exc = prev1 + 0;

        int ans = max(inc,exc);
        prev2 = prev1;
        prev1 = ans;
    }

    return prev1;
}

    int rob(vector<int>& valueInHouse) {
            int n = valueInHouse.size();

    if(n==1){
        return valueInHouse[0];
    }

    vector<int> first,second;
    for(int i=0;i<n;i++){
        if(i!=0){
            first.push_back(valueInHouse[i]);
        }
        if(i!=n-1){
            second.push_back(valueInHouse[i]);
        }
    }

    return max(solve(first,n-1),solve(second,n-1));
    }
};