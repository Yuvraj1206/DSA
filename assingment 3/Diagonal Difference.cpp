#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n],i,j,d1=0,d2=0,s=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                d1=d1+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)==(n-1)){
                d2=d2+a[i][j];
            }
        }
    }
    s=(d1>d2)?(d1-d2):(d2-d1);
    cout<<s;
    return 0;
}
