//Program to find the sum of positive numbers
//if the user enters a negative numbers, break ends the loop
#include<iostream>
using namespace std;
int main(){
    int number;
    int sum=0;

    while(true)
    {
        cout<<"enetr a number";
        cin>>number;
        if(number<0)
        {
            break;
        }
        sum=sum+number;
    }
    cout<<"total sum is "<<sum;
    return 0;
}