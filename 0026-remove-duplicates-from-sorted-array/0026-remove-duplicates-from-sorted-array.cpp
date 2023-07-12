#include <vector>
#include <iostream>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                nums.erase(nums.begin() + i);
                i--; // Decrement i to recheck the current index after erasing.
            }
        }
        
        int size = nums.size();
        std::cout << size << std::endl;
        
        return size;
    }
};
