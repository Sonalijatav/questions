class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count=0;

        for(int i=0;i<nums.size();i++){
            int ans =0;
            for(int j=i;j<nums.size();j++){
                ans = ans+nums[j];
               
               if(ans ==k){
                count++;
               }
            }
        }
        return count;
    }
};