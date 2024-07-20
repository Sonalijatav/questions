class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                count = 0;
            }else{
                count++;
            }
            a.push_back(count);
       }
        
        int max = INT_MIN;
        for(int i=0;i<a.size();i++) {
            if(a[i] > max){
                max = a[i];
            }
        }

        return max;
    }
};