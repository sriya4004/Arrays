//brute force (O(N^2))
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result; 
                }
            }
        }

        return result;
    }

//Better O(N X logN)
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        map<int,int> mpp;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            int a = arr[i];
            int more = target - a;
            if(mpp.find(more)!= mpp.end()){
                return true;
            }
            mpp[a]=i;
        }
        return false;
    }
};


//Better too
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Store numbers along with their original indices
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        
        // Sort based on values, but keep track of original indices
        sort(arr.begin(), arr.end());
        
        // Two-pointer approach
        int left = 0, right = n - 1;
        
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            
            if (sum == target) {
                return {arr[left].second, arr[right].second}; // Return original indices
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }
        
        return {}; // Return empty vector if no solution exists
    }
};

