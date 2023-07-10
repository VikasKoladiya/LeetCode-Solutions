class Solution {

public:
bool ispossible(vector<int> piles, int mid,int h)
{
    int ans = 0;
    for(int i=0;i<piles.size();i++)
    {
        if(piles[i]%mid!=0)
        piles[i]=piles[i]+(mid-(piles[i]%mid));
    }
    int devide;
    for(int i=0;i<piles.size();i++){
        devide = piles[i]/mid;
        ans+=devide;
        if(ans>h){
            return false;
        }
    }
    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e= 1e9;
        int ans = -1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(ispossible(piles,mid,h)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};