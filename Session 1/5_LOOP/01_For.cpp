//Print the Even numbers till the given number using For loop#
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number till u want to print even numbers ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}