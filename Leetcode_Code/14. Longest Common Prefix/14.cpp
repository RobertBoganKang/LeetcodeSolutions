class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result = "";
        if (strs.size() == 0) return result;
        if (strs.size() == 1) return strs[0];
        bool test = true;
        int j = 0;
        int size0 = (int) strs[0].size();
        while (test && j < size0) {
            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i][j] != strs[i - 1][j] || strs[i].length() < j + 1) test = false;
            }
            if (test) result += strs[0][j];
            j++;
        }
        return result;
    }
};