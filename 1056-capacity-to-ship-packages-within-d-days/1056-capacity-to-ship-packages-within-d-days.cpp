class Solution {
public:

    bool isPossible(vector<int> & weights,int days,int mid){

        int dayCount=1,midcount=0;

        for(int i=0;i<weights.size();i++){
            if(weights[i]+midcount <= mid){
                midcount += weights[i];
            }
            else{
                dayCount++;
                if(dayCount>days || weights[i] > mid){
                    return false;
                }
                midcount = weights[i];
            }
        }
        return true;

    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end()),end=0;
        int ans = -1;
        for(auto i:weights){
            end+=i;
        }

        while(start<=end){
            int mid=start+(end-start)/2;

            if(isPossible(weights,days,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};