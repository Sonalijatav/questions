class Solution {
public:
    
    vector<int> findMaxMin(vector<int> &bloomDay){
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i=0;i< bloomDay.size(); i++){
            maxi = max(bloomDay[i], maxi);
            mini = min(bloomDay[i], mini);
        }
        return {mini,maxi};
    }
    bool possible(vector<int>& bloomDay,int mid, int m, int k){
        int n = bloomDay.size(); //size of the array
        int cnt = 0;
        int noOfB = 0;
       // count the number of bouquets:
       for (int i = 0; i < n; i++) {
          if (bloomDay[i] <= mid) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
      noOfB += (cnt / k);
    return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        vector<int>MaxMinEle = findMaxMin(bloomDay);
        int n = bloomDay.size();
        int s = MaxMinEle[0];
        int e = MaxMinEle[1];
        int mid = s+(e-s)/2;
        int ans = -1;
        
        // long long val = (long long )n*k;
        long long val = m * 1ll * k * 1ll;

        if(val>n){return -1;}
        
        while(s<=e){
            
            if(possible(bloomDay,mid, m, k)){
                e = mid-1;
                ans = mid;
            }else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        
        
        
        return ans;
    }
};