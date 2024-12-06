class Solution {
public:
    int missingNumber(vector<int>& nums) {
     // (sare ele ka xor) ^ ( sare index ka xor)
        int xorEle=0;
        int xorIndex = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
           
                xorEle = xorEle ^ nums[i];
                xorIndex = xorIndex ^ (i+1);
            
        }
        
        return (xorEle ^ xorIndex); 
        
        
//          int ans;
//         for(int i =0 ;i<nums.size();i++){
//             int index = abs(nums[i]);
//              if(nums[i] != nums[index]){
//                 swap(nums[i], nums[index]);
//             }
//             // nums[index] = nums[index]*-1;
//         }
        
//         for(int i =0 ;i<nums.size();i++){
//               cout<<nums[i]<<" ";
//         }
//         for(int i =0 ;i<nums.size();i++){
//               if(nums[i] != i ){
//                 ans = i;
//               }
              
//         }


//         return ans;
    }
};