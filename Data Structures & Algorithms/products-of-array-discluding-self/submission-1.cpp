class Solution {
public:
    typedef long long ll;
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[n-1] = 1;
        for (int i=n-2; i>=0; i--) {
            res[i] = res[i+1] * nums[i+1];
        }

        int currProd = 1;
        for (int i=0; i<n; i++) {
            res[i] = res[i] * currProd;
            currProd *= nums[i];
        }

        return res;
    }
};
