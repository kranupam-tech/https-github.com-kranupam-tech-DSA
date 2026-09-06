class Solution {
public:
    int countEven(int num) {
        int count=0;
         
         for(int i=1;i<=num;i++){
          int n,rem, sum=0;
          n=i;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;

        }
        
            if(sum%2==0){
             count++;
        } 
      }
        return count;
    }
};