class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        map<long long, int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        for(int i = 0; i<n; i++){
            sum +=arr[i];
            if(sum == k){
                maxLen = max(maxLen, i+1);
            }
            
            int rem = sum - k;
            //This checks if a prefix sum of value rem = sum - k exists in the map.
            if(preSumMap.find(rem)!=preSumMap.end()){  
                int len = i - preSumMap[rem];//preSumMap[rem]:gives the index where that previous prefix sum occurred.
                maxLen = max(maxLen,len); // i is the current index
            }
            //That means it’s the first time we are getting this specific sum.
            if(preSumMap.find(sum)==preSumMap.end()){ 
                preSumMap[sum] = i; //the earliest index of that sum to get the longest possible subarray when checking
            }
        }
        return maxLen;
    }
};
