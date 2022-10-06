#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
    int a[3],b[3],i,A=0,B=0;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            A++;
        }
        else if(a[i]<b[i]){
            B++;
        }
    }
    cout<<A<<" "<<B;
    return 0;
}
