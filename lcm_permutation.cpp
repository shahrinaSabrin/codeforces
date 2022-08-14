#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"1\n";
        }
        else
        {
        if(n%2==0)
        {
            
            for(int i=1;i<=n;i++)
            {
               
                
                   if(i%2)
                    cout<<i+1<<" ";
                   else
                    cout<<i-1<<" ";
                
             }
             cout<<"\n";
        }
        else
        {
            
            for(int i=1;i<=n;i++)
            {
                if(i==1)
                {
                    cout<<i<<" ";
                }
                else
                {
                   if(i%2)
                    cout<<i-1<<" ";
                   else
                    cout<<i+1<<" ";
                } 
             }
             cout<<"\n";
         }
            
            
        }
    
      }
}
