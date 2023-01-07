string twoStrings(string s1, string s2) {
    int a1[26]={0}, a2[26]={0};
    for(int i=0; i<s1.length(); i++){
        a1[s1[i]-'a']++;
    }
    for(int i=0; i<s2.length(); i++){
        a2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(a1[i]!=0 && a2[i]!=0 ){
            return "YES";
        }
    }
    return "NO";
    
}
