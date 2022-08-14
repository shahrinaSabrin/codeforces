#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int number;
        cin>>number;
        int digit =0;
        int n=number;
        while(n!=0)
        {
            n/=10;
            digit++;
        }
        int round = number - pow(10,digit-1);
        cout<<round<<endl;
    }
    return 0;
}