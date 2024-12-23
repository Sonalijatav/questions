class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        
        int s=0;
        int e= nums.size()-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            if(nums[s] <= nums[e] ){
                mini = min(nums[s], mini);
                break;
            }
            
            
            //left part sorted
            if(nums[s]<=nums[mid]){
                mini = min(nums[s], mini);
                s = mid+1;                
            }
            //right
            else {
                mini = min(nums[mid], mini);
                e= mid-1;
            }
           
            mid = s+(e-s)/2;
        }
        
        return mini;
    }
    
    
};