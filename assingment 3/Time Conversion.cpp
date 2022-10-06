#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    string date;
    cin>>date;
    string h,m,s;
    int a;
    h=date[0];
    h+=date[1];
    m=date[3];
    m+=date[4];
    s=date[6];
    s+=date[7];
    if(date[8]=='A' && h == "12"){
        h="00";
    } 
    else if(date[8]=='P' && h !="12"){
        a=stoi(h);
        h=to_string(a+12);
    }
    cout<<h<<":"<<m<<":"<<s;
}
