class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxHeap;
        
        for(int i=0;i<piles.size();i++){
            maxHeap.push(piles[i]);
         }
        
        while(k--){
            int maxEle = maxHeap.top();
            maxHeap.pop();
            maxEle = maxEle - floor(maxEle/2);
            maxHeap.push(maxEle);
        }
        
        //sum
        int sum = 0;
        while(!maxHeap.empty()){
            int temp = maxHeap.top();
            maxHeap.pop();
            sum = sum + temp;
        }
        
        return sum;
    }
};