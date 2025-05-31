class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int row = 0; row < numRows; row++) {
            vector<int> temp;
            long long ans = 1;
            temp.push_back(1);

            for (int col = 1; col <= row; col++) {
                ans = ans * (row - col + 1);
                ans = ans / col;
                temp.push_back(ans);
            }

            result.push_back(temp);
        }

        return result;
    }

    vector<vector<int>> pascalTriangle(int N) {
        return this->generate(N);
    }
};
