class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

      
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        
        for (int right = k; right < nums.size(); right++) {
            sum = sum - nums[right - k] + nums[right];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};