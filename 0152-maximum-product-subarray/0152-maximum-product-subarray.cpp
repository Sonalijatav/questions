class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int res =  nums[0];
        for(int i=0;i<nums.size();i++){
            int p=  nums[i];
            for(int j=i+1 ; j<nums.size(); j++){

                res =  max(p,res);
                p = p*nums[j];
             }
            res = max(p,res);
        }
        
        return res;
    }
};