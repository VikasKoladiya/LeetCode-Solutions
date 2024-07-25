class Solution {
public:
    void merge(vector<int> &v,int s,int e){
        int m=s+(e-s)/2;

        int len1=m-s+1;
        int len2=e-m;

        int *first =new int [len1];
        int *second = new int [len2];

        int mainArrayIndex=s;
        for(int i=0;i<len1;i++){
            first[i]=v[mainArrayIndex++];
        }

        mainArrayIndex=m+1;
        for(int i=0;i<len2;i++){
            second[i]=v[mainArrayIndex++];
        }

        int idx1=0;
        int idx2=0;
        mainArrayIndex=s;

        while(idx1<len1 && idx2<len2){
            if(first[idx1]<second[idx2]){
                v[mainArrayIndex++]=first[idx1++];
            }
            else{
                v[mainArrayIndex++]=second[idx2++];
            }
        }

        while(idx1<len1){
            v[mainArrayIndex++]=first[idx1++];
        }

        while(idx2<len2){
            v[mainArrayIndex++]=second[idx2++];
        }
        delete[] first;
        delete[] second;
    }
    void mergesort(vector<int> &v,int s,int e){
        if(s>=e){
            return;
        }
        int m = s + (e-s)/2;
        mergesort(v,s,m);
        mergesort(v,m+1,e);
        merge(v,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int s =0 , e = nums.size()-1;
        mergesort(nums,s,e);
        return nums;
    }
};