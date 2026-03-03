class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        long long best = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long h = min(height[i], height[j]);
                long long w = j - i;
                best = max(best, h * w);
            }
        }
        return best;
    }
};