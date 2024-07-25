class Solution {
public:
     void merge(vector<int> &nums, int s, int e){
      int mid = s+(e-s)/2;
      int n1 = mid-s+1;
      int n2 = e-mid;
      
      //make 2 new array 
      
      int *arr1 = new int[n1];
      int *arr2 = new int[n2];

      for(int i=0;i<n1;i++){
        arr1[i]= nums[s+i];
      }
      for(int i=0;i<n2;i++){
        arr2[i]= nums[mid+1+i];
      }

//apply two pointers to sort

   int i=0; int j =0; int k =s;

   while(i<n1 && j<n2){
    if(arr1[i] <arr2[j]){
        nums[k]= arr1[i];
        i++;
    }
    else{
        nums[k]=arr2[j];
        j++;
    }
    k++;
   }

 while(i<n1){
    nums[k] = arr1[i];
    i++;
    k++;
 }
 while(i<n1){
    nums[k] = arr1[j];
    j++;
    k++;
 }

}
    void mergesort(vector<int> &nums, int s, int e){
        
        int mid = s+(e-s)/2;
       if(s>=e){return;}

       //sort left
       mergesort(nums,s,mid);

       //sort right
       mergesort(nums,mid+1,e);
       
       merge(nums,s,e);
     
    }
    vector<int> sortArray(vector<int>& nums) {
         int s=0;
        int e=nums.size()-1;
         mergesort(nums,s,e);
         return nums;
    }
};