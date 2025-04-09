//select the smallest and second smallest numbers and add them, you will get the score for that subarray. Return the maximum possible score across all the subarrays of array arr[].
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int n = arr.size();
        int maxScore = 0;
        for(int i = 0; i<n-1; i++){
            int first = arr[i];
            int second = arr[i+1];
            int sum = min(first,second) + max(first,second);
            maxScore = max(maxScore, sum);
        }
        return maxScore;
    }
};
