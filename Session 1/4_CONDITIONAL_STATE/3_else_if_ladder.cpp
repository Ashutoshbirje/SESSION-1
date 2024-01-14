#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    if(num>0){
        cout<<"Positive Number"<<endl;
    }
    else if(num<0){
        cout<<"Negative Number";
    }
    else if(num==0){
        cout<<"It is zero";
    }
}

// Syntex
/*
 if(condtion 1)
 {

 }
 else if(condtion 2)
 {
    
 }
 else
 {

 }
*/