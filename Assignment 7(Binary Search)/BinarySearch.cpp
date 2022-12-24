class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int s=0, e=n-1;
        int m=(s+e)/2;
        
        while(s<=e){
            if(nums[m] == target){
                return m;
            }
            else if(nums[m] > target){
                e=m-1;
            }
            else if(nums[m] < target){
                s=m+1;
            }
            m=(s+e)/2;
        }
        return -1;
    }
};
