class Solution {
public:
   
    
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++){
           if(nums[i]>nums[(i+1)%n])
             count++;
        }

        return count<=1;
      
    }
};







    //        for(i=0;i<nums.size();i++){
    //     if(nums[i]==nums[i+1]){
    //         flag = true;
    //     }
    //     else
    //     flag = false;
    //  }



    // while(i<nums.size()){
    //         if(nums[i] <= nums[i+1]){
    //           flag = true;
    //           i++;

    //         }
    //         else
    //            flag = false;
               
    //     }
    //     return flag ;