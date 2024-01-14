#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    string s;
    s=(num%2==0)?"Even":"Odd";
    cout<<s<<endl; 
}

// Syntex:
// (condition) ? [true_statements] : [false_statements];
