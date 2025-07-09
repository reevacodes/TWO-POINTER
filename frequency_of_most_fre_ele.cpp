#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array

        long long total = 0;  // To store sum of current window
        int l = 0;            // Left pointer of window
        int ans = 0;          // To store maximum frequency

        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];  // Add current number to total window sum

            // If cost to make all nums[l...r] equal to nums[r] is too much
            while ((long long)nums[r] * (r - l + 1) - total > k) {
                total -= nums[l]; // Remove leftmost element from window
                l++;              // Shrink window from left
            }

            // Update answer with current window size
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 4, 8, 13};
    int k = 5;

    cout << "Max Frequency: " << sol.maxFrequency(nums, k) << endl;
    return 0;
}
