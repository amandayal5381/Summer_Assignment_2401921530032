class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long current = 0;

        for(int i = 0; i < k; i++) {
            current += nums[i];
        }

        long long answer = current;

        int left = 0;

        for(int right = k; right < nums.size(); right++) {

            current += nums[right];
            current -= nums[left];
            left++;

            if(current > answer) {
                answer = current;
            }
        }

        return (double)answer / k;
    }
};