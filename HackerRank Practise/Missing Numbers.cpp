vector<int> missingNumbers(vector<int> a, vector<int> b) {
    vector<int> ans;
    vector<int> c1 (10001,0);  // a ke liye (isme missing hai)
    vector<int> c2 (10001,0);  //b ke liye (ye bada hai)
    
    for(int i=0; i<a.size(); i++){   // storing count of element of a
        c1[a[i]]++;
    }
    for(int i=0; i<b.size(); i++){   //storing count of element of b
        c2[b[i]]++;
    }
    for(int i=1; i<10001; i++){
        if(c2[i]>c1[i]){
            ans.push_back(i);
    }
return ans;   
}
