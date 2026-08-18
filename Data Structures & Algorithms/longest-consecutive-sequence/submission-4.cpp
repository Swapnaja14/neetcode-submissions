class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int maxlen = 0;
        for (int num: st) {
            if (st.find(num-1) == st.end()) {
                int current = num;
                int length = 1;

                while (st.find(current+1) != st.end()) {
                    current++;
                    length++;
                }
                maxlen = max(maxlen, length);
            }
        }
        return maxlen;
    }
};
