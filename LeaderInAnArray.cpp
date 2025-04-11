#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i = n-1; i>=0; i--){
        if(elements[i]>maxi){
            ans.push_back(elements[i]);
        }
        maxi = max(maxi, elements[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
