class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>a,b;
        
        for(int i=0;i<row;i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] ==0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        
    
      
       
        for(int k=0;k<a.size();k++){
             int newa = a[k];
             int newb = b[k];
            
             for(int j=0; j<col; j++){
                    matrix[newa][j] = 0;
            }
            
             for(int j=0; j<row; j++){
                    matrix[j][newb] = 0;
            }
        
        }
        
        
   

    }
};