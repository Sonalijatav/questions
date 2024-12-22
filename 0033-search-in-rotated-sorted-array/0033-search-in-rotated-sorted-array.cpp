class Solution {
public:



int search(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans =-1;

    while(s<=e){

        if(nums[mid]==target){
                return mid;
            }
        //left sorted
            
        else if(nums[s] <= nums[mid]){
            if(nums[s]<=target  && target <= nums[mid]){
                e =mid-1;
            }else{
                s = mid+1;
            }
            
        }
        //right
         else {
             if(nums[mid]<=target  && target <= nums[e]){
                s =mid+1;
            }else{
                e = mid-1;
            }   
         }
            mid = s+(e-s)/2;
    }

        return -1; 

  }
};