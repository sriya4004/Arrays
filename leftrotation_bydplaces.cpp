//Brute Force
void leftRotate(int arr[], int n, int d) {
    d = d % n;  // In case d > n
    int temp[d];

    // Step 1: Store first d elements in temp[]
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Step 3: Copy elements from temp[] to the end
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
}



//optimal
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
      k = k % n;
      reverse(nums.begin(), nums.begin() + k);
      reverse(nums.begin() + k, nums.end());
      reverse(nums.begin(), nums.end());
    }
};
