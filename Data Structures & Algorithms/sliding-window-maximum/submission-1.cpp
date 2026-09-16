class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> dq;
        vector<int> result;

        for (int right = 0; right < nums.size(); right++) {

            // Remove indices outside the window
            while (!dq.empty() && dq.front() <= right - k) {
                dq.pop_front();
            }

            // Remove smaller elements
            while (!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            // Add current index
            dq.push_back(right);

            // Window is complete
            if (right >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }
};