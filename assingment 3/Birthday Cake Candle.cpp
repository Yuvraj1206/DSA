#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
    int n,i,l,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    l=a[0];
    for(i=0;i<n;i++){
        if(l<a[i]){
            l=a[i];       
        }  
    } 
     for(i=0;i<n;i++){
        if (l==a[i]){
            c++;
        }  
    }
    cout<<"largest"<<l<<endl;
    cout<<c;
    return 0;
}
