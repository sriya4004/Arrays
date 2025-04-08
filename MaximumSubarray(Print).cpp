class Solution {
public:
    // Function to find pair with maximum subarray sum
    int pairWithMaxSum(vector<int> &arr) {
        int n = arr.size();
        int ansStart = -1;
        int ansEnd = -1;
        int start = 0;  
        int sum = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (sum == 0) {
                start = i;
            }

            sum += arr[i];

            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if (sum < 0) {
                sum = 0;
            }
        }
        cout << "Maximum sum subarray is from index " << ansStart << " to " << ansEnd << endl;
        return maxi;
    }
};
