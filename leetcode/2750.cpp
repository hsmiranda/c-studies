/*
    https://leetcode.com/problems/ways-to-split-array-into-good-subarrays/submissions/
*/

class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
            const int MOD = 1e9 + 7;
            int prev = -1;
            long answer = 0;

            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] == 1) {
                    if (prev == -1) {
                        answer = 1;
                        prev = i;
                        continue;
                    }
                    answer = (answer*(i - prev)%MOD)%MOD;
                    prev = i;
                }
            }

            return answer;
        }
};