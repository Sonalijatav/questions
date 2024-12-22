class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int s=0;
        int e =nums.size()-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            if(nums[mid] == target){
                return true;
            }
            
           //  //Edge case:
           if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
            s = s + 1;
            e = e - 1;
            continue;
            }


            
            if(nums[s] <= nums[mid]){
                if(nums[s] <= target && target <= nums[mid]){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[e]){
                    s = mid+1;
                 }else{
                    e=mid-1;
                }
            }
            mid = s+(e-s)/2;
        }
        
        return false;
    }
};