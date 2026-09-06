class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[num[i] - '0']++;
        }
        int val = 0;
        for (int i = 0; i < n; i++) {
            if (mp[val] != num[i] - '0')
                return false;
            val++;
        }
        return true;
    }
};