int camelcase(string s) {
    int c=1;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<= 'Z' ){
            c++;
        }
    }
    return c;
}
