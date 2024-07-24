class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum =0;
         int maxi = INT_MIN;
        // if(nums.size()==1){return nums[0];}
        for(int i=0;i<nums.size();i++){ 
            sum = sum + nums[i];
            maxi = max(maxi,sum);
            if(sum<0){sum=0;}
            
        }
        
        return maxi;
    }
};









//  int sum =0;
//          int maxi = INT_MIN;
//         for(int i=0;i<nums.size();i++){ 
//             sum=0;
//             for(int j= i;j<nums.size();j++){
//                  sum = sum + nums[j];
//                 maxi = max(maxi,sum);
//             }
//         }
        
//         return maxi;