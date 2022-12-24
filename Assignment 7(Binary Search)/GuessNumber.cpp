class Solution {
public:
    int guessNumber(int n) {
        int s=1,e=n;
        while(true){
            int mid=s+(e-s)/2;
            int g=guess(mid);
            if(g==0){
                return mid;
            }
            else if(g==-1){
                e=mid-1;
            }
            else if(g==1){
                s=mid+1;
            }
        }
    }
};
