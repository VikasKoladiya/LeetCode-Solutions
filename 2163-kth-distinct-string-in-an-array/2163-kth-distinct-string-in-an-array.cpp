class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        } 
        for(auto p:arr){
            if(m[p]==1){
                k--;
                if(k==0){
                    return p;
                }
            }
        }
        return "";
    }
};