class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<pair<int, int>> zer;
        for(int i=0; i<r; ++i) {
            for(int j=0; j<c; ++j) {
                if(matrix[i][j]==0) {
                    pair<int, int> ind;
                    ind.first = i;
                    ind.second = j;
                    zer.push_back(ind);
                }
            }
        }
        for(int i=0; i<zer.size(); ++i) {
            for(int j=0; j<r; ++j) {
                matrix[j][zer[i].second] = 0;
            }
            for(int j=0; j<c; ++j) {
                matrix[zer[i].first][j] = 0;
            }
        }
    }
};
