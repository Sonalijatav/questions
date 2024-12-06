class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // UNIQUE
        
        int xorEle = 0;
        for(int i=0;i<nums.size();i++){
            xorEle = xorEle ^ nums[i];
        }
        
        return xorEle;
    }
};