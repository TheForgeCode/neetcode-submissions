class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> temp(26);

        for(char c: s){
            temp[c - 'a']++;
        }
        for(char c: t){
            temp[c - 'a']--;
        }

        for(int i: temp){
            if(i != 0) return false;
        }
        return true;
    }
};
