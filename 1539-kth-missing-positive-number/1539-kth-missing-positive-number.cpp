class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s =0;
        int e = arr.size()-1;
        
        int mid = s+(e-s)/2;
        
        while(s<=e){
            int missing = arr[mid] - (mid+1);
            
            if(missing < k){
                s = mid+1;
            }else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        
        // int ans = arr[e] + (k-missing);
        // int ans = arr[e] + (k)- (arr[e]-e-1);
        int ans = e + k+1;            //or s+k;
        return ans;
    }
};