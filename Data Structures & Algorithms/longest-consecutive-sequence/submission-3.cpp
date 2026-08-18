class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0 || n==1) return n;
        set<int> numSet;
        for (int num: nums) {
            numSet.insert(num);
        }
        int longest = 0;
        for (int num: numSet) {
            if (!numSet.contains(num-1)) {
                int length = 1;
                while (numSet.contains(num + length)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
