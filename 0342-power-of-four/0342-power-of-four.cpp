class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag ;
        
        if(n == 1){
               return true;
         }
        if(n == 0){
              return false;
         }
        
        if(n%4==0){
           flag = true;
        }else{
            return false;    
         }
        flag =  isPowerOfFour(n/4);
        
        
        return flag;
    }
    
};