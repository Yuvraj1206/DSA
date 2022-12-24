class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int s = 1 , e=x,m;
        while(s<=e){
            m=s+(e-s)/2;
            if(m == x/m){
                break;
            }
            else if(m > x/m){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        if(m>x/m){
            return m-1;
        }
        else{
            return m;
        }
    }
};
