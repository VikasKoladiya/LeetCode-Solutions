class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> posi(30000);
        vector<int> neg(30000);
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg[nums[i] * (-1)]++;
            } else {
                posi[nums[i]]++;
            }
        }
        
        for (int i = 0; i <30000; i++) {
            if (neg[i] == 1) {
                return i * (-1);
            }
            if (posi[i] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};
