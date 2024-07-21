class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag ;
        int count =0;
        if(n == 1){
               return true;
         }
        if(n == 0){
              return false;
         }
        
        if(n%2==0){
           flag = true;
            count++;
        }else{
            return false;    
         }
        flag =  isPowerOfTwo(n/2);
        
        
        return flag;
    }
};