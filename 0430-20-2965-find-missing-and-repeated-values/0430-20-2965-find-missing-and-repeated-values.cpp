class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() * grid[0].size();  // Total number of elements in the grid
        vector<int> v;
        unordered_map<int, int> freq;
        int miss = 0, rep = 0;

        // Flatten the 2D grid into a 1D vector and count frequencies
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                v.push_back(grid[i][j]);
                freq[grid[i][j]]++;
            }
        }

        // Find the repeated number (frequency > 1)
        for (auto& entry : freq) {
            if (entry.second > 1) {
                rep = entry.first;
            }
        }

        // Find the missing number by checking the frequency of each number from 1 to n
        for (int i = 1; i <= n; i++) {
            if (freq.find(i) == freq.end()) {
                miss = i;  // This number is missing
                break;
            }
        }

        return {rep, miss};
    }
};