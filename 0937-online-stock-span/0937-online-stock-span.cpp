class StockSpanner {
public:
    StockSpanner() {
        
    }
    vector<int> v;
    int next(int price) {
        int count = 0;
        v.push_back(price);
        int n =v.size();
        int i = n-1;
        for(;i>=0;i--){
            if(price>=v[i]){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */