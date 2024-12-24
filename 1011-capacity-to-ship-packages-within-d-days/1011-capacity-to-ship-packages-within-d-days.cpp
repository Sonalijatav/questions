class Solution {
public:
    int sumWeights(vector<int> &weights){
        int sumele =0;
        for(int i=0;i<weights.size();i++){
            sumele = sumele + weights[i];
        }
        return sumele;
    }
    int check(vector<int>weights, int mid){
        int load = 0;
        int capacity = mid;
        int daycnt =1;
        
        for(int i=0; i<weights.size();i++){
            if(weights[i] + load>capacity){
                load = weights[i];
                daycnt++;
            }else{
                load = load+weights[i];
            }
        }
        return daycnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s= *max_element(weights.begin(), weights.end());
        //max capcity of ship is sum of all weihts
        int e =  sumWeights(weights);
        int ans =-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            
            //capcity of ship = mid
            int daycnt = check(weights,mid);
            
            if(daycnt <= days){
                e = mid-1;
                ans = mid;
            }
            else{
                s=mid+1;
            }
            
            mid = s+(e-s)/2;
        }
        return ans;
    }
};