class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int left = 0, right = 0;
      int sum = 0;
      int maxLen = 0;
      int n = nums.size();
      while(right<n){
        while(left<=right && sum>k){
          sum -= nums[left];
          left++;
        }
        if(sum == k){
          maxLen = max( maxLen, right - left + 1);
        }
        right++;
        if(right<n) sum += nums[right];
      }
      return maxLen; 
    }
};
