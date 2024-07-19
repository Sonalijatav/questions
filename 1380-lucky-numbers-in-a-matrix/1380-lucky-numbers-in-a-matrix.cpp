class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>a;
        vector<int>b;
        
        for(int i =0; i<m ; i++){
                    int min = INT_MAX;

            for(int j =0; j< n;j++){
                if(matrix[i][j] < min){
                    min = matrix[i][j];
                }
            }
            a.push_back(min);
        }
        
        
        for(int i =0; i<n ; i++){
            int max = INT_MIN;
            for(int j =0; j< m;j++){
                if(matrix[j][i] > max){
                    max = matrix[j][i];
                }
            }
            b.push_back(max);
        }
        
        vector<int>ans;
        for(int i = 0;i<a.size();i++) {
             for(int j=0; j<b.size();j++){
                 if(a[i] == b[j]){
                     ans.push_back(a[i]);
                 }
             }
        }
        
        
        return ans;
    }
};