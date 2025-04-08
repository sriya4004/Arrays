class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor2 = 0;
        int xor1 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i + 1);
        }
        return xor1 ^ xor2;
    }
};

//also
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int arraySum = 0;
        for(int i = 0; i<n; i++){
            arraySum+=nums[i];
        }
        return sum-arraySum;
    }
};
