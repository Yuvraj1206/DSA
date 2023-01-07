int chocolateFeast(int n, int c, int m) {
    int w=n/c,ct=n/c;
    while(w>=m){
        ct=ct+1;
        w=w-m+1;   
    }
    return ct;
}
