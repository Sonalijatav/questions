class Solution {
public:
    bool search(vector<int>& row, int target){
        
        int s = 0;
        int e =  row.size()-1;
        int mid  = s+(e-s)/2;
        
        while(s<=e){
         
           if(row[mid] == target){
              return true; 
           }
           else if(row[mid]>target){
              e=mid-1;
           }
           else if(row[mid]<target){
              s=mid+1;
           }

           mid = s+(e-s)/2;
        };

        return false;
    }
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       for(int i=0;i<matrix.size();i++){
           bool ans = search(matrix[i],target);
           if(ans){
               return true;
           }
       }
        
        return false;
    }
};