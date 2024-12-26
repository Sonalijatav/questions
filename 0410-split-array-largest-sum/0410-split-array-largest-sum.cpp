class Solution {
public:
    //same as book allocatio, painters partiotion
    int countStudent(vector<int>& arr,int n, int mid){
    int no_stu = 1;
    long long countPages =0;
     for(int i=0;i<n ;i++){
        if(countPages+arr[i]  <= mid){
           countPages+=arr[i];
        }else{
           no_stu++;
           countPages = arr[i];
        }
     }
     return no_stu;
}
int SumArr(vector<int>& arr, int n){
    int Sum = 0;
     for(int i=0;i<n ;i++){
         Sum  = (Sum + arr[i]);
     }
     return Sum;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int s = *max_element(arr.begin(),arr.end());
    int e = SumArr(arr,n);
    
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        int stu = countStudent(arr,  n,   mid);
        if(stu > m){
            s = mid+1;
            // ans = mid;
        }
        else{
            e = mid-1;
            ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int splitArray(vector<int>& nums, int k) {
        int ans = findPages(nums,nums.size(), k);
    return ans;
    }
};