class Solution {
public:
    int first_index(vector<int> arr,int target){
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        int index = -1;

        while(s<=e){
            if(arr[mid]>=target){
                e = mid-1;
                if(arr[mid]==target){
                    index = mid;
                }
            }
            else{
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return index;
    }

    int last_index(vector<int> arr,int target){
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        int index = -1;

        while(s<=e){
            if(arr[mid]<=target){
                s = mid+1;
                if(arr[mid]==target){
                    index = mid;
                }
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first_index(nums,target));
        ans.push_back(last_index(nums,target));
        return ans;
    }
};