class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
          int count =0;
           int a = nums[i];
          for(int j=0;j<nums.size();j++){
            if(a == nums[j]){
                count++;
            }
          }
          if(count>nums.size()/2){
            return a;
          }
        }
      return -1;
    }
};