class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string ans;
        unordered_map<string,int> m;

        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
            if(m[arr[i]]==1 && k==1){
                ans=arr[i];
            }
            else if(m[arr[i]]==1 ){
                k--;
            }
        }
        return ans;
        
    }
};
