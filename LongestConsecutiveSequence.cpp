//better with tc: O(nlogn) and sc: O(1)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int longest = 1;
        int cnt = 1;
        int lastSmaller = INT_MIN;
        for(int i = 0; i<n; i++){
            if(nums[i]-1 == lastSmaller){
                cnt++;
                lastSmaller = nums[i];
            }

            else if(nums[i] != lastSmaller){
                cnt = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};


//Optimal tc: O(3N) and sc: O(N)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int longest = 1;
        int cnt = 0;
        if(n == 0) return 0;
        for(int i = 0; i<n; i++){
            st.insert(nums[i]);
        }  
        
        for(auto it: st){
          // it - 1 is not in the set, that means it is the beginning of a sequence.
            if(st.find(it-1)==st.end()){
                cnt = 1;
                int x = it;
//You're checking if the next consecutive number (x + 1) exists in the set:
//st.find(x + 1) returns an iterator to the element if it's found.
//If it's not found, it returns st.end() (meaning it's the end of the set).
                while(st.find(x+1)!=st.end()){
                    x = x + 1;
                    cnt = cnt + 1;
                }
            }
            longest = max(longest,cnt);
        }
        return longest; }
};
