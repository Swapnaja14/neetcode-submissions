class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        for (int i=0; i<n-1; i++) {
            int num = nums[i];
            int rem = target - num;
            for (int j=i+1; j<n; j++) {
                if (nums[j] == rem) {
                    return {i, j};
                    break;
                }
            }
        }
        return {};
    }
};
