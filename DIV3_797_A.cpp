#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int pos1=n/3;
        int pos2=n/3;
        int pos3= n/3;
        if(n%3==0)
        {
          pos1++;
          pos3--;  
        }
        if(n%3==1)
        {
          pos1+=2;
          pos3--;  
        }
        if(n%3==2)
        {
          pos1+=2;
          pos2++;
          pos3--;
           
        }
        cout<<pos2<<" "<<pos1<<" "<<pos3<<endl;

    }
}