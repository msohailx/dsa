class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char, int> map_a, map_b;
       if(s.size() != t.size())return false;
       for(int i = 0; i < s.size(); i++){
            map_a[s[i]]++;
            map_b[t[i]]++;
       }
       if(map_a == map_b)return true;
       return false;
    }
};
