class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto newend = remove(nums.begin(),nums.end(),val);
        nums.resize(distance(nums.begin(), newend));
        return nums.size();
    }
};