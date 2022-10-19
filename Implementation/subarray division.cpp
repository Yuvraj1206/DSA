#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
vector <int> s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
}
int d,m;
cin>>d>>m;
int sum=0,count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<m+i;j++){
            sum+=s[j]; 
        }
       if(sum==d){
        count++;
        }
        sum=0;
    }
    cout<<count;
return 0;
}
