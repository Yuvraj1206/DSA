int makingAnagrams(string s1, string s2) {
    
    int a1[26]={0};
    int a2[26]={0};
    
    for(int i=0; i<s1.length(); i++){
        a1[s1[i]-'a']++;
    }
    for(int i=0; i<s2.length(); i++){
        a2[s2[i]-'a']++;
    }
    int c=0;
    for(int i=0; i<26; i++){
        if(a1[i]>a2[i]){
            int x=a1[i]-a2[i];
            c=c+x;
        }
        else if(a2[i]>a1[i]){
            int y=a2[i]-a1[i];
            c=c+y;
        }
    }
    return c;
}
