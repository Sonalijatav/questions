class Solution {
public:
    int findMax(vector<int> &piles){
        int maxi = INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }
    long long findTotalHr(vector<int> &piles, int mid){
        long long totalHr =  0;
        for(int i=0;i<piles.size();i++){
            // totalHr += ceil((double)(piles[i]) / (double)(mid));
            totalHr += (piles[i] + mid - 1) / mid;

        }
        return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        long long e = findMax(piles);
        int ans =-1;
        long long mid = s+(e-s)/2;
        
        
        while(s<=e){
            long long totalHr = findTotalHr(piles, mid);
            
            if(totalHr <= h){
                e=mid-1;
                ans = mid;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};