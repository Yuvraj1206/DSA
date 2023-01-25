class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char ,int> m;

        for(int i=0 ;i< stones.length(); i++){
            m[stones[i]]++;
        }
        int c=0;
        for(int i=0; i<jewels.length(); i++){
            if(m[jewels[i]]>0){
                c=c+m[jewels[i]];
            }
        }
        return c;

    }
};
