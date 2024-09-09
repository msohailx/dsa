class Solution {
public:
    int hammingWeight(int n) {
        string str = "";
        while(n > 0){
            str += (n % 2 == 0 ? '0': '1');
            n /= 2;
        }
        return count(str.begin(), str.end(), '1');
    }
};
