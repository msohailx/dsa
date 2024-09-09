class Solution {
public:
    int numOnes(int n){
        string str = "";
        while(n > 0){
            str += (n % 2 == 0 ? '0' : '1');
            n /= 2;
        }
        return count(str.begin(), str.end(), '1');
    }
    vector<int> countBits(int n) {
        vector<int> vec;
        for(int i = 0; i <= n; i++){
            vec.push_back(numOnes(i));
        }
        return vec;
    }
};
