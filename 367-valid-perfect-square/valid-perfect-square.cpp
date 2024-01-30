class Solution {
public:
    bool isPerfectSquare(int num) {
         { int i=0;
         int end=sqrt(num);
         
         while(i<=end){
             if(i*i==num){
                 return true;
             }
             else
             if(i*i<num)
             {
                 i++;

             }
             else
             end--;
         }
         return false;

        
    }
        
    }
};