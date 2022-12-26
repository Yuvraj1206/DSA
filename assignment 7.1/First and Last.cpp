class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0, e= nums.size()-1;
        vector<int> ans{-1,-1};
        //left
        while(s<=e){
            int m = (s+e)/2;
            if(nums[m]==target){
                ans[0]=m;
                e=m-1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }

        }

        //right
        s=0;
        e= nums.size()-1;
        while(s<=e){
            int m = (s+e)/2;
            if(nums[m]==target){
                ans[1]=m;
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }

        }
        return ans;
    }
};
