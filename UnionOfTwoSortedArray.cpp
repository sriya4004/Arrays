class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        vector<int> UnionArr;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();

        while (i < n && j < m) {
            if (a[i] < b[j]) {
                if (UnionArr.empty() || UnionArr.back() != a[i]) {
                    UnionArr.push_back(a[i]);
                }
                i++;
            } else if (b[j] < a[i]) {
                if (UnionArr.empty() || UnionArr.back() != b[j]) {
                    UnionArr.push_back(b[j]);
                }
                j++;
            } else {
                if (UnionArr.empty() || UnionArr.back() != a[i]) {
                    UnionArr.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        while (i < n) {
            if (UnionArr.empty() || UnionArr.back() != a[i]) {
                UnionArr.push_back(a[i]);
            }
            i++;
        }

        while (j < m) {
            if (UnionArr.empty() || UnionArr.back() != b[j]) {
                UnionArr.push_back(b[j]);
            }
            j++;
        }

        return UnionArr;
    }
};
