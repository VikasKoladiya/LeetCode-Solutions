class ProductOfNumbers {
public:
    vector<int> v;
    int product = 1;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
        return ;
    }
    
    int getProduct(int k) {
        product = 1;
        int j = v.size()-1;
        for(int i=0;i<k;i++){
            product*=v[j--];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */