int migratoryBirds(vector<int> arr) {
    int a[6]={0};       //array to store count of birds
    for(int i=0; i<arr.size();i++){   // storing count of birds
        a[arr[i]]++;
    }
    int f=0,j;   //frequency
    for(int i=0;i<6;i++){
        if(a[i]>f){
            f=a[i];
            j=i;          //i is the no. I have to return whose count is a[i]
        }
    }
    return j;
}
