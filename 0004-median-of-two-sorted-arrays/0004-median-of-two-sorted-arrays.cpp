class Solution {
public:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        
        for(int i=0;i<nums1.size() ;i++){
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size() ;i++){
            nums3.push_back(nums2[i]);
        }

        sort(nums3.begin(), nums3.end());

        double median;
        
        int n = nums3.size();
        

        if(n%2 !=0){
            median  = nums3[((n+1)/2)-1];
        }
        if(n%2 ==0){
            cout<<nums3[(n/2)-1]<<"  "<<nums3[(n/2) +1-1];

            median  = (nums3[(n/2)-1] + nums3[((n/2) + 1-1)] ) /2.0;
        }

        return median;

    }
};