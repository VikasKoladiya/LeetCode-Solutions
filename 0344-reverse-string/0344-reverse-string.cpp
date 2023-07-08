class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        while(st<=e){
            swap(s[st++],s[e--]);
        }

        // we can also use this one
        // this is very simple and easy this pribuild function of vector 
        // reverse(s.begin(),s.end());
    }
};