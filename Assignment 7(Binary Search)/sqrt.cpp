class Solution {
public:
    int mySqrt(int x) {
        long long i=0;
        if(x==0){
            return 0;
        }
        for(i=1; i++; i<(x/2)){
            if(i*i > x){
                break;
            }
        }
        return i-1;
    }
};
