class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int n = nums.size();
        //Edge cases:
    if (n == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        
        while(s<=e){
            
             
            if ((nums[mid] != nums[mid - 1]) && (nums[mid] != nums[mid+1]) ) {
               return nums[mid];
             }

            
            //unique is on left
            if((nums[mid] == nums[mid+1] && mid%2 ==0)  ||(nums[mid] == nums[mid-1] && mid%2 ==1) ){
                s = mid+1;
            }      //right
            else{
                e = mid-1;
            }
            
           
            mid = s+(e-s)/2;
        }
        
        return -1;
    }
};