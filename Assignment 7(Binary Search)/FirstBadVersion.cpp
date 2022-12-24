class Solution {
public:
    int firstBadVersion(int n) {
        int s=1 ,e=n;
        int lg=0;  //last good
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isBadVersion(mid)){
                e=mid-1;
            }
            else{
                s=mid+1;
                lg=mid;
            }

        }
         return lg+1;
        
    }
};
