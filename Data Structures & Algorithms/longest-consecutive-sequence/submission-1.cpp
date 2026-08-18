class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0 || n==1) return n;
        set<int> st;
        for (int num: nums) {
            st.insert(num);
        }
        vector<int> arr;
        for (int num: st) {
            arr.push_back(num);
        }

        int maxlen = 1;
        int len = 1;
        for (int i=1; i<arr.size(); i++) {
            if (arr[i] == arr[i-1] + 1) {
                len++;
                maxlen = max(maxlen, len);
            }
            else {
                len = 1;
            }
        }
        return maxlen;
    }
};
