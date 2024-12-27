class Solution {
public:
    int findMax(vector<vector<int>>& mat, int rows, int mid) {
    int maxi = -1;
    int index = -1;
    for (int i = 0; i < rows; i++) {
        if (mat[i][mid] > maxi) {
            maxi = mat[i][mid];
            index = i;
        }
    }
    return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        int low = 0; int high  = cols-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            int matRowIndex = findMax(mat,rows,mid);
            
            int left = (mid - 1 >= 0) ? mat[matRowIndex][mid - 1] : -1;
            int right = (mid + 1 < cols) ? mat[matRowIndex][mid + 1] : -1;
                    
            
            if(mat[matRowIndex][mid] > left && mat[matRowIndex][mid] > right ){
                return {matRowIndex, mid};
            }
            else if(mat[matRowIndex][mid] <left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return{-1,-1};
    }
};