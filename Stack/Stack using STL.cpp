#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
      
    //inserting element to the top of stack
    s.push(4);
    s.push(7);
    s.push(8);
    s.push(10);
    
    //deleting element from top of stack
    s.pop();
    
    //Printing top element of stack
    cout<<s.top()<<endl;

    //checking is stack is empty  
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty";
    }

    return 0;
}
