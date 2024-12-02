class Solution {
public:
    int reverse(int x) {
        int r;
      long reverse=0;
        while(x !=0){
         r =x %10;
         reverse = reverse *10+r;
         x =x/10;
            
          if(reverse>2147483647 || reverse< -2147483648){return 0;}
        }
     
         return reverse;
         
    }
};