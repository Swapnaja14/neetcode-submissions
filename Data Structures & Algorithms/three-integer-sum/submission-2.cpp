class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        set<vector<int>> st;
        
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            int target = -nums[i];
            int j = i + 1, k = n - 1;
            
            while (j < k) { 
                int sum = nums[j] + nums[k];
                if (sum == target) {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    st.insert(triplet);
                    j++;
                    k--;
                } 
                else if (sum < target) {
                    j++; 
                } 
                else {
                    k--; 
                }
            }
        }
        
        for (auto& triplet : st) {
            res.push_back(triplet);
        }
        return res;
    }
};