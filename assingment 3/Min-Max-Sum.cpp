#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int long ar[5];
    for(int i=0;i<5;i++){
    cin>>ar[i];
    }
    int long l=ar[0], s=ar[0];
    for(int i=0;i<5;i++){
    if(l<ar[i]){
        l=ar[i];
    }
    if(s>ar[i]){
        s=ar[i];
    }
    }
    int long sum=0;
    for(int i=0;i<5;i++){
        sum+=ar[i];
    }
    int long min,max;
    min = sum-l;
    max=sum-s;
    cout<<min<<" "<<max;
    
    return 0;
}
