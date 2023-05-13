#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;


class Stack {

public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void push(int x){
        if(top< size-1 ){
            top++;
            arr[top]=x;
        }
        else{
            cout<<"stack OverFlow"<<endl;
        }   
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack Underflow"<<endl;
        }   
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        
            return -1;
        
    }

    bool isEmpty(){
        if(top==-1){
            return true;      
        }
        
            return false;
        
    }

};

int main(){

    Stack st(10);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(2);
    
    cout<<st.peek()<<endl;
    
    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    
    st.pop();
    cout<<st.peek()<<endl;
}
