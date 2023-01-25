class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        map<int ,int> w, l;
        for(int i=0; i<matches.size(); i++){
            w[matches[i][0]]++;
            l[matches[i][1]]++;
        }
        vector<int> temp;
        for(auto i:w){
            if(l[i.first]==0){
                temp.push_back(i.first);
            }
        }
        ans.push_back(temp);
        vector<int> temp2;
        for(auto i:l){
            if(i.second==1){
                temp2.push_back(i.first);
            }
        }
        ans.push_back(temp2);

        return ans;
        
    }
};
