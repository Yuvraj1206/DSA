#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long n;
    cin>>n;

    for(int i=0;i<n;i++){
        long x,y,z;
        cin>>x>>y>>z;
        if(abs(z-x)<abs(z-y)){
            cout<<"Cat A"<<endl;
        }    
        
        else if(abs(z-x)==abs(z-y)){
            cout<<"Mouse C"<<endl;
        }
        else{
            cout<<"Cat B"<<endl;
        }
    }
}
