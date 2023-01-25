class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        while(m[original]>0){
            original=original*2;
        }
        return original;
    }
};
