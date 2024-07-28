class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int Alicesum =0;
        int Bobsum =0;
            
        int Alicesum1 =0;
        int Bobsum1 =0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                Alicesum = Alicesum + nums[i];
            }else{
                Bobsum = Bobsum + nums[i];
            }
            
            
            if(nums[i]>9){
                Alicesum1 = Alicesum1 + nums[i];
            }else{
                Bobsum1 = Bobsum1 + nums[i];
            }
            
            
        }
        
        if(Alicesum > Bobsum  || Alicesum1 > Bobsum1){
            return true;
        }
        
        
        
        
        
        return false;
        
    }
};