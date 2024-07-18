class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            bool flag = false,ischeck=true;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    // cout<<"inside"<<endl;
                    // cout<<nums1[i]<<" "<<nums2[j];
                    flag = true;
                }
                if(flag && (nums1[i]<nums2[j]) && (nums1[i]!=nums2[j])){
                    ischeck = false;
                    v.push_back(nums2[j]);
                    break;
                }
            }
            if(ischeck)
                v.push_back(-1);
        }
        return v;
    }
};