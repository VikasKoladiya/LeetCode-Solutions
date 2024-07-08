#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //1. Two Array Approach
        // int posi[30001] = {0};
        // int neg[30001] = {0};
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] < 0) {
        //         neg[-nums[i]]++;
        //     } else {
        //         posi[nums[i]]++;
        //     }
        // }
        
        // for (int i = 0; i <= 30000; i++) {
        //     if (neg[i] == 1) {
        //         return i * (-1);
        //     }
        //     if (posi[i] == 1) {
        //         return i;
        //     }
        // }
        
        // return -1;

        //2. XOR Method
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};
