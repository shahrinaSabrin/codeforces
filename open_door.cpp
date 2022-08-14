#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x;
        cin>>x;
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        if(x==1)
        {    
                if((arr[0]==2 &&arr[1]==3)||(arr[0]==3 &&arr[2]==2))
                    flag=1;    
        }
        else if(x==2)
        {
               
                if((arr[1]==1 &&arr[0]==3)||(arr[1]==3 &&arr[2]==1))
                    flag=1;    
        
        }
        else if(x==3)
         if((arr[2]==1 &&arr[0]==2)||(arr[2]==2 &&arr[1]==1))
                    flag=1;

        
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
}