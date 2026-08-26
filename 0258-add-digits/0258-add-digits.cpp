class Solution {
public:
    int addDigits(int num) {  
        while(num>9)
       { int res=0,rem;
        
            while(num!=0)
            { 
                rem=num%10;
                num=num/10;
                res=res+rem;
            } 
            num=res;
        }
        return num;
    }
};