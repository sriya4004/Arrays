class Solution {
  public:
    int getSecondSmallest(vector<int> &arr) {
        int smallest = arr[0];
        int ssmallest = INT_MAX;
        int n = arr.size();
        for(int i ; i<n ; i++){
            if(arr[i]<smallest){
                ssmallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i]!=smallest && arr[i]<ssmallest){
                ssmallest = arr[i];
            }
        }
        return ssmallest;
    }
}; 
