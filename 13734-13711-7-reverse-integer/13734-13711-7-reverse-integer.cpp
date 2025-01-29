class Solution {
public:
    int reverse(int x) {
        int revdigit=0;
        while(x!=0){
            int digit = x%10;
            if((revdigit>INT_MAX/10)||(revdigit<INT_MIN/10))
            return 0;
            revdigit=revdigit*10+digit;
            x=x/10;
        }
        return revdigit;
    }
};