class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minPrice = nums[0];
        int maxProfit = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minPrice)
                minPrice = nums[i];
             if (nums[i] - minPrice > maxProfit)
                maxProfit = nums[i] - minPrice;
            }

        return maxProfit;
    }
};