/*
 * Find total contribution of all character in the string
 * Use if else ladder for various cases
 */





class Solution {
public:
    int passwordStrength(string s) {
        int cnt = 0;
        set<int> lower, upper, num, spec;

        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') upper.insert(s[i]);
            else if(s[i] >= 'a' && s[i] <= 'z') lower.insert(s[i]);
            else if(s[i] >= '0' && s[i] <= '9') num.insert(s[i]);
            else spec.insert(s[i]);
        }

        cnt += (lower.size() * 1);
        cnt += (upper.size() * 2);
        cnt += (num.size() * 3);
        cnt += (spec.size() * 5);

        return cnt;
    }
};
