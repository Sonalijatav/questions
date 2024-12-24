class Solution {
public:
    
    int findSum(vector<int>nums, int mid){
        int sumRes = 0;
        for(int i=0;i<nums.size();i++){
            sumRes += ceil( (double)nums[i]/ (double)mid);
        }
        return sumRes;
    }
    int maxiEle(vector<int>nums){
        int maxi = INT_MIN;
        for(int i =0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        int e = maxiEle(nums);
        cout<<e;
        
        int mid = s+(e-s)/2;
        int ans = -1;
        
        if(nums.size()>threshold)  return -1;
        
        while(s<=e){
            
            int sumRes = findSum(nums,mid);
            
            if(sumRes <= threshold){
                ans = mid;
                e = mid-1;        
            }
            else{
                s= mid+1;
            }
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};