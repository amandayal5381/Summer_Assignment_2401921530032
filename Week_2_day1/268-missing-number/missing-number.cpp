class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        long long totalSum = 1LL * n * (n + 1) / 2;
        long long arrSum = 0;

        for (int i = 0; i < n; i++) {
            arrSum += nums[i];
        }

        return totalSum - arrSum;
    }
};