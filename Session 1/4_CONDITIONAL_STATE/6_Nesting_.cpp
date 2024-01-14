#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter a number ";
    cin>>age;
    if(age>18){
        if(age>25)
        cout<<"Legislative"<<endl;
        else 
        cout<<"Normal Voting"<<endl;
    }
    else {
        cout<<"Not eligible to vote";
    }
}

// Syntex
/*
if(condition)
{
   if(condition)
   {

   }
}
*/