class Solution {
public:
    bool isThree(int n) {
         if(n==1 || n==2){return false;}
         if(n==4){return true;}
         int factorNo=1;

         for(int i=2;i<=n/2;i++){  //for prime
             if(n%i ==0){
                factorNo++;
             }
         }


    if(factorNo == 2){
        return true;
    }
    else
      return false;

    }
};