#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        string str(m, 'B');

            
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];  
        }

        for(int i=0;i<n;i++)
        {
            
            int x= min(arr[i],(m-arr[i]+1));
            int y= max(arr[i],(m-arr[i]+1));
            

            if(str[x-1]=='B')
                str[x-1]='A';

            else
                str[y-1]='A';

          
            
        }
        
           cout<<str<<endl;
           



    }
}