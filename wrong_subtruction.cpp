#include<iostream>
using namespace std;
int main()
{
    int number,subtruct;
    cin>>number>>subtruct;
    int n=number;
   
    while(subtruct--)
    {
        if(number%10!=0)
        {
            number-=1;;
        }
        else if(number%10==0)
        {
            number/=10;
        }
    }
    cout<<number<<endl;
   
  
}