string pangrams(string str) {
    int arr[26]={0};
    
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' '){
            if(str[i]>='a' && str[i]<='z'){
                arr[str[i]-'a']++;
            }
            else{
                arr[str[i]-'A']++;
            }
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]==0){
            return "not pangram";
        }
    }
    return "pangram";
    
}
