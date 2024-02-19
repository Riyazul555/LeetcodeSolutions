class Solution {
public:
    bool isFascinating(int n) {
        string ans = to_string(n) + to_string(2*n) + to_string(3*n);

        if(ans.length()!=9){
            return false;
        }

        unordered_set<char>res;
         for(char digit : ans){
             if(digit == '0' || res.count(digit) > 0){
                 return false;
             }
             res.insert(digit);
         }
         return true;
    }
};