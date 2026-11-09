class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0;
        int r = n-1;
        int maxArea = INT_MIN;

        while (l < r) {
            int area = min(heights[l], heights[r]) * (r-l);
            maxArea = max(maxArea, area);
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};
