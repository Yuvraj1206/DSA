#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    string str;
    cout<<"Enter the string you want to reverse: ";
    cin>>str;

    for(int i=0;i<str.length(); i++){
        s.push(str[i]);
    }

    for(int i=0;i<str.length(); i++){
        str[i]=s.top();
        s.pop();
    }

    cout<<str<<endl;

    return 0;
}
