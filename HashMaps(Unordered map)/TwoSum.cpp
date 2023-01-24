class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int temp;
        for(int i=0; i<nums.size(); i++){
            temp=target-nums[i];

            for(int j=i+1; j<nums.size(); j++){
                if(temp == nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }

        }
        return ans;
    }
};
