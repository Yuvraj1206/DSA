string balancedSums(vector<int> arr) {
    int n=arr.size(),d=0;
    int Ts=0,Cs=0;
    for(int i=0; i<n;i++){
        Ts=Ts+arr[i];
    }
    for(int i=0;i<n;i++){
        Cs=Cs+arr[i-1];
        if(Cs == Ts-arr[i]-Cs){
            return "YES";
        }
    }
    return "NO"; 
}
