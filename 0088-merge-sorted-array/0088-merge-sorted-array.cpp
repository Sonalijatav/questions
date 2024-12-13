class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
         for(int i=0;i<(n);i++){
            nums1.pop_back();
        }
        for(int i=0;i<(n);i++){
            nums1.push_back(nums2[i]);
        }
        for(int i=0;i<(m+n);i++){
           cout<<(nums1[i]);
        }
        
        sort(nums1.begin(),nums1.end());
    }
};