class Solution {
public:
    bool isPowerOfThree(int n) {
                bool flag ;
        
        if(n == 1){
               return true;
         }
        if(n == 0){
              return false;
         }
        
        if(n%3==0){
           flag = true;
     
        }else{
            return false;    
         }
        flag =  isPowerOfThree(n/3);
        
        
        return flag;
    
    }
};