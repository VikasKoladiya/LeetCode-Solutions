class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> ans;
        stack<int> st;
        st.push(-1);

        for(int i=nums2.size()-1; i>=0; i--){
            int num = nums2[i];
            while(st.top()!=-1 && st.top()<=num){
                st.pop();
            }
            ans[num] = st.top();
            st.push(num);
        }
        for(auto n : nums1) v.push_back(ans[n]);
        return v;
    }
};