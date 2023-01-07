vector<int> icecreamParlor(int m, vector<int> arr) {

vector<int> ans;
int n= arr.size();

for(int i=0; i<n; i++){

    for(int j=i+1;j<n;j++){

        if(arr[i]+arr[j]==m){
            
            ans.push_back(i+1);
            ans.push_back(j+1);
        }
    }
}

return ans;
}
