//Program to print stream of 10 Natural numbers,which doesn’t include 3 and 5. 
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++)
    {
        if(i==3||i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}